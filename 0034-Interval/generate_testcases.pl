use strict;
use warnings;
use experimental 'say';
my $N = 100;
my $M = 2**15 - 1;

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;

for my $n (2..$M) {
    my $n = int(1 + rand($N));
    
    my @arr = map { int(rand($M)) } 1..$n;

    if ($arr[0] > $arr[-1]) { ($arr[0], $arr[-1]) = ($arr[-1], $arr[0]); }
    my ($start, $end) = ($arr[0], $arr[-1]);

    my $count = grep { $_ >= $start && $_ <= $end } @arr;
    
    say $hf "$n " . join ' ', @arr;
    say $fh "$count";
}