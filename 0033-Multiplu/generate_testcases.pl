use strict;
use warnings;
use experimental 'say';
my $N = 2**6 - 1;
my $M = 2**15 - 1;

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;

for my $n (2..$M) {
    my $n = int(1 + rand($N));
    my $k = int(1 + rand(10));
    
    my @arr = map { int(rand($M)) } 1..$n;
    my $count = grep { $_ % 10 == $k && $_ % $k == 0 } @arr;
    print $hf "$n $k ";
    say $hf join ' ', @arr;
    say $fh "$count";
}