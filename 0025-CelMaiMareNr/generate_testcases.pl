use strict;
use warnings;
use List::Util qw/sum/;
my $N = 2**29 - 1; # Nu stiu de ce orice exponent peste 29 nu merge...
my $M = 2**15 - 1;

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;

for my $i (2..$M) {
    my $random = int(1 + rand($N));
    print $hf "$random\n";    
    my $rev = join "", reverse sort split //, "$random";
    print $fh "$rev\n";
}