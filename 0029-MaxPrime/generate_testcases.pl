use strict;
use warnings;
use Math::Prime::Util qw/prev_prime/;
my $N = 2**25 - 1; 
my $M = 2**17 - 1;

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;

for my $i (2..$M) {
    my $random = int(1 + rand($N));
    print $hf "$random\n";
    my $a = prev_prime($random);
    my $b = prev_prime($a);
    print $fh "$a $b\n";
}