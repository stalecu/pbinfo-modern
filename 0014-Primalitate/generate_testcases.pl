use v5.010;
use strict;
use warnings;
use Math::Prime::Util ':all';

my $N = 2**15 - 1;
open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;
for my $i (1..$N) {
    my $random = int(1 + rand($N));
    print $hf "$random\n";    
    my $is_prime = (is_prime($random) ? 1 : 0);
    print $fh "$is_prime\n";
}