use strict;
use warnings;
use experimental 'say';
use Math::Prime::Util qw/next_prime prev_prime is_prime/;
my $N = 2**6;
my $M = 2**15 - 1;

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;

for my $n (2..$M) {
    my $x = int(3 + rand($N));
    say $hf $x;
    if (is_prime $x) {
        say $fh 0;
    } else {
        say $fh (next_prime($x) - prev_prime($x));
    }
}