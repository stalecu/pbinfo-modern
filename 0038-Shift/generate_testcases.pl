use strict;
use warnings;
use experimental 'say';

my $N = 2**15 - 1;
my $M = 2**7 - 1;

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;

sub shift_n {
    my ($arr) = @_;

    return if (@$arr <= 1);

    my $first_element = shift @$arr;
    push @$arr, $first_element;
}

for my $n (2..$M) {
    my $arr_size = int(1 + rand(100)); # Generate array size between 1 and 100
    my @arr = map { int(1 + rand($N)) } 1..$arr_size;

    say $hf scalar @arr, ' ', join(' ', @arr);
    shift_n \@arr;
    say $fh join(' ', @arr);
}

close $fh;
close $hf;
