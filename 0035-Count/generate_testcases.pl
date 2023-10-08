use strict;
use warnings;
use experimental 'say';
use List::Util qw/sum0/;
my $N = 2**6 - 1;
my $M = 2**15 - 1;

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;

for my $n (2..$M) {
    my $numElems = int(1 + rand($N));
    my @arr = map { rand() * $N } 1..$numElems;
    say $hf scalar @arr . ' ' . join ' ', @arr;
    my $avg = (1.0 * sum0 @arr) / @arr;
    my $count = scalar grep { $_ >= $avg } @arr;

    say $fh "$count";
}