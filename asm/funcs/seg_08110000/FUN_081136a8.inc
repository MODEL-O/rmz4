@ FUN_081136a8  entry 0x081136a8  size 280
.thumb
.org 0x1136a8
FUN_081136a8:
	push {r4, r5, r6, r7, lr}	@ 001136a8 f0b5
.org 0x1136aa
	sub sp, #12	@ 001136aa 83b0
.org 0x1136ac
	adds r7, r0, #0	@ 001136ac 071c
.org 0x1136ae
	ldrb r0, [r7, #2]	@ 001136ae b878
.org 0x1136b0
	cmp r0, #6	@ 001136b0 0628
.org 0x1136b2
	bls.n 0x1136b6	@ 001136b2 00d9
.org 0x1136b4
	b.n 0x113984	@ 001136b4 66e1
.org 0x1136b6
	lsls r0, r0, #2	@ 001136b6 8000
.org 0x1136b8
	ldr r1, [pc, #4]	@ 001136b8 0149
.org 0x1136ba
	adds r0, r0, r1	@ 001136ba 4018
.org 0x1136bc
	ldr r0, [r0, #0]	@ 001136bc 0068
.org 0x1136be
	mov pc, r0	@ 001136be 8746
.org 0x1136c0
	.byte 0xc4,0x36,0x11,0x08	@ 001136c0 data
.org 0x1136c4
	.byte 0xe0,0x36,0x11,0x08	@ 001136c4 data
.org 0x1136c8
	.byte 0xf4,0x36,0x11,0x08	@ 001136c8 data
.org 0x1136cc
	.byte 0x1e,0x37,0x11,0x08	@ 001136cc data
.org 0x1136d0
	.byte 0xc2,0x37,0x11,0x08	@ 001136d0 data
.org 0x1136d4
	.byte 0x14,0x38,0x11,0x08	@ 001136d4 data
.org 0x1136d8
	.byte 0x0c,0x39,0x11,0x08	@ 001136d8 data
.org 0x1136dc
	.byte 0x24,0x39,0x11,0x08	@ 001136dc data
.org 0x1136e0
	.byte 0x3f	@ 001136e0 data
.org 0x1136e1
	.byte 0x4a	@ 001136e1 data
.org 0x1136e2
	.byte 0x11	@ 001136e2 data
.org 0x1136e3
	.byte 0x78	@ 001136e3 data
.org 0x1136e4
	.byte 0x80	@ 001136e4 data
.org 0x1136e5
	.byte 0x20	@ 001136e5 data
.org 0x1136e6
	.byte 0x08	@ 001136e6 data
.org 0x1136e7
	.byte 0x43	@ 001136e7 data
.org 0x1136e8
	.byte 0x10	@ 001136e8 data
.org 0x1136e9
	.byte 0x70	@ 001136e9 data
.org 0x1136ea
	.byte 0x20	@ 001136ea data
.org 0x1136eb
	.byte 0x20	@ 001136eb data
.org 0x1136ec
	.byte 0xb8	@ 001136ec data
.org 0x1136ed
	.byte 0x80	@ 001136ed data
.org 0x1136ee
	.byte 0xb8	@ 001136ee data
.org 0x1136ef
	.byte 0x78	@ 001136ef data
.org 0x1136f0
	.byte 0x01	@ 001136f0 data
.org 0x1136f1
	.byte 0x30	@ 001136f1 data
.org 0x1136f2
	.byte 0xb8	@ 001136f2 data
.org 0x1136f3
	.byte 0x70	@ 001136f3 data
.org 0x1136f4
	.byte 0xb8	@ 001136f4 data
.org 0x1136f5
	.byte 0x88	@ 001136f5 data
.org 0x1136f6
	.byte 0x01	@ 001136f6 data
.org 0x1136f7
	.byte 0x38	@ 001136f7 data
.org 0x1136f8
	.byte 0x00	@ 001136f8 data
.org 0x1136f9
	.byte 0x23	@ 001136f9 data
.org 0x1136fa
	.byte 0xb8	@ 001136fa data
.org 0x1136fb
	.byte 0x80	@ 001136fb data
.org 0x1136fc
	.byte 0x00	@ 001136fc data
.org 0x1136fd
	.byte 0x04	@ 001136fd data
.org 0x1136fe
	.byte 0x00	@ 001136fe data
.org 0x1136ff
	.byte 0x28	@ 001136ff data
.org 0x113700
	.byte 0x00	@ 00113700 data
.org 0x113701
	.byte 0xd0	@ 00113701 data
.org 0x113702
	.byte 0x3f	@ 00113702 data
.org 0x113703
	.byte 0xe1	@ 00113703 data
.org 0x113704
	.byte 0x37	@ 00113704 data
.org 0x113705
	.byte 0x49	@ 00113705 data
.org 0x113706
	.byte 0x0a	@ 00113706 data
.org 0x113707
	.byte 0x68	@ 00113707 data
.org 0x113708
	.byte 0x0b	@ 00113708 data
.org 0x113709
	.byte 0x20	@ 00113709 data
.org 0x11370a
	.byte 0x50	@ 0011370a data
.org 0x11370b
	.byte 0x73	@ 0011370b data
.org 0x11370c
	.byte 0x08	@ 0011370c data
.org 0x11370d
	.byte 0x68	@ 0011370d data
.org 0x11370e
	.byte 0x83	@ 0011370e data
.org 0x11370f
	.byte 0x73	@ 0011370f data
.org 0x113710
	.byte 0x08	@ 00113710 data
.org 0x113711
	.byte 0x68	@ 00113711 data
.org 0x113712
	.byte 0xc3	@ 00113712 data
.org 0x113713
	.byte 0x73	@ 00113713 data
.org 0x113714
	.byte 0x20	@ 00113714 data
.org 0x113715
	.byte 0x20	@ 00113715 data
.org 0x113716
	.byte 0xb8	@ 00113716 data
.org 0x113717
	.byte 0x80	@ 00113717 data
.org 0x113718
	.byte 0xb8	@ 00113718 data
.org 0x113719
	.byte 0x78	@ 00113719 data
.org 0x11371a
	.byte 0x01	@ 0011371a data
.org 0x11371b
	.byte 0x30	@ 0011371b data
.org 0x11371c
	.byte 0xb8	@ 0011371c data
.org 0x11371d
	.byte 0x70	@ 0011371d data
.org 0x11371e
	.byte 0xba	@ 0011371e data
.org 0x11371f
	.byte 0x88	@ 0011371f data
.org 0x113720
	.byte 0x01	@ 00113720 data
.org 0x113721
	.byte 0x32	@ 00113721 data
.org 0x113722
	.byte 0x00	@ 00113722 data
.org 0x113723
	.byte 0x26	@ 00113723 data
.org 0x113724
	.byte 0x11	@ 00113724 data
.org 0x113725
	.byte 0x1c	@ 00113725 data
.org 0x113726
	.byte 0xba	@ 00113726 data
.org 0x113727
	.byte 0x80	@ 00113727 data
.org 0x113728
	.byte 0x2f	@ 00113728 data
.org 0x113729
	.byte 0x4c	@ 00113729 data
.org 0x11372a
	.byte 0x30	@ 0011372a data
.org 0x11372b
	.byte 0x4b	@ 0011372b data
.org 0x11372c
	.byte 0xe0	@ 0011372c data
.org 0x11372d
	.byte 0x18	@ 0011372d data
.org 0x11372e
	.byte 0x01	@ 0011372e data
.org 0x11372f
	.byte 0x70	@ 0011372f data
.org 0x113730
	.byte 0xff	@ 00113730 data
.org 0x113731
	.byte 0x20	@ 00113731 data
.org 0x113732
	.byte 0x08	@ 00113732 data
.org 0x113733
	.byte 0x40	@ 00113733 data
.org 0x113734
	.byte 0x01	@ 00113734 data
.org 0x113735
	.byte 0x3b	@ 00113735 data
.org 0x113736
	.byte 0xe1	@ 00113736 data
.org 0x113737
	.byte 0x18	@ 00113737 data
.org 0x113738
	.byte 0x08	@ 00113738 data
.org 0x113739
	.byte 0x70	@ 00113739 data
.org 0x11373a
	.byte 0x01	@ 0011373a data
.org 0x11373b
	.byte 0x3b	@ 0011373b data
.org 0x11373c
	.byte 0xe1	@ 0011373c data
.org 0x11373d
	.byte 0x18	@ 0011373d data
.org 0x11373e
	.byte 0x08	@ 0011373e data
.org 0x11373f
	.byte 0x70	@ 0011373f data
.org 0x113740
	.byte 0x12	@ 00113740 data
.org 0x113741
	.byte 0x04	@ 00113741 data
.org 0x113742
	.byte 0x12	@ 00113742 data
.org 0x113743
	.byte 0x14	@ 00113743 data
.org 0x113744
	.byte 0x3f	@ 00113744 data
.org 0x113745
	.byte 0x2a	@ 00113745 data
.org 0x113746
	.byte 0x00	@ 00113746 data
.org 0x113747
	.byte 0xdc	@ 00113747 data
.org 0x113748
	.byte 0x1c	@ 00113748 data
.org 0x113749
	.byte 0xe1	@ 00113749 data
.org 0x11374a
	.byte 0x38	@ 0011374a data
.org 0x11374b
	.byte 0x1c	@ 0011374b data
.org 0x11374c
	.byte 0xff	@ 0011374c data
.org 0x11374d
	.byte 0xf7	@ 0011374d data
.org 0x11374e
	.byte 0x6a	@ 0011374e data
.org 0x11374f
	.byte 0xf9	@ 0011374f data
.org 0x113750
	.byte 0x26	@ 00113750 data
.org 0x113751
	.byte 0x80	@ 00113751 data
.org 0x113752
	.byte 0x27	@ 00113752 data
.org 0x113753
	.byte 0x4d	@ 00113753 data
.org 0x113754
	.byte 0x29	@ 00113754 data
.org 0x113755
	.byte 0x88	@ 00113755 data
.org 0x113756
	.byte 0x27	@ 00113756 data
.org 0x113757
	.byte 0x48	@ 00113757 data
.org 0x113758
	.byte 0x08	@ 00113758 data
.org 0x113759
	.byte 0x40	@ 00113759 data
.org 0x11375a
	.byte 0x90	@ 0011375a data
.org 0x11375b
	.byte 0x22	@ 0011375b data
.org 0x11375c
	.byte 0x52	@ 0011375c data
.org 0x11375d
	.byte 0x01	@ 0011375d data
.org 0x11375e
	.byte 0x11	@ 0011375e data
.org 0x11375f
	.byte 0x1c	@ 0011375f data
.org 0x113760
	.byte 0x08	@ 00113760 data
.org 0x113761
	.byte 0x43	@ 00113761 data
.org 0x113762
	.byte 0x28	@ 00113762 data
.org 0x113763
	.byte 0x80	@ 00113763 data
.org 0x113764
	.byte 0x24	@ 00113764 data
.org 0x113765
	.byte 0x48	@ 00113765 data
.org 0x113766
	.byte 0x06	@ 00113766 data
.org 0x113767
	.byte 0x80	@ 00113767 data
.org 0x113768
	.byte 0xee	@ 00113768 data
.org 0x113769
	.byte 0xf6	@ 00113769 data
.org 0x11376a
	.byte 0x68	@ 0011376a data
.org 0x11376b
	.byte 0xfe	@ 0011376b data
.org 0x11376c
	.byte 0x81	@ 0011376c data
.org 0x11376d
	.byte 0x23	@ 0011376d data
.org 0x11376e
	.byte 0x9b	@ 0011376e data
.org 0x11376f
	.byte 0x00	@ 0011376f data
.org 0x113770
	.byte 0x18	@ 00113770 data
.org 0x113771
	.byte 0x1c	@ 00113771 data
.org 0x113772
	.byte 0xe8	@ 00113772 data
.org 0x113773
	.byte 0x80	@ 00113773 data
.org 0x113774
	.byte 0x2e	@ 00113774 data
.org 0x113775
	.byte 0x61	@ 00113775 data
.org 0x113776
	.byte 0x21	@ 00113776 data
.org 0x113777
	.byte 0x48	@ 00113777 data
.org 0x113778
	.byte 0x0c	@ 00113778 data
.org 0x113779
	.byte 0x24	@ 00113779 data
.org 0x11377a
	.byte 0x80	@ 0011377a data
.org 0x11377b
	.byte 0x21	@ 0011377b data
.org 0x11377c
	.byte 0xc9	@ 0011377c data
.org 0x11377d
	.byte 0x01	@ 0011377d data
.org 0x11377e
	.byte 0xee	@ 0011377e data
.org 0x11377f
	.byte 0xf6	@ 0011377f data
.org 0x113780
	.byte 0xd7	@ 00113780 data
.org 0x113781
	.byte 0xfa	@ 00113781 data
.org 0x113782
	.byte 0x1f	@ 00113782 data
.org 0x113783
	.byte 0x48	@ 00113783 data
.org 0x113784
	.byte 0x00	@ 00113784 data
.org 0x113785
	.byte 0x21	@ 00113785 data
.org 0x113786
	.byte 0xee	@ 00113786 data
.org 0x113787
	.byte 0xf6	@ 00113787 data
.org 0x113788
	.byte 0x3f	@ 00113788 data
.org 0x113789
	.byte 0xfd	@ 00113789 data
.org 0x11378a
	.byte 0x1e	@ 0011378a data
.org 0x11378b
	.byte 0x48	@ 0011378b data
.org 0x11378c
	.byte 0xe9	@ 0011378c data
.org 0x11378d
	.byte 0x88	@ 0011378d data
.org 0x11378e
	.byte 0x0c	@ 0011378e data
.org 0x11378f
	.byte 0x40	@ 0011378f data
.org 0x113790
	.byte 0x24	@ 00113790 data
.org 0x113791
	.byte 0x03	@ 00113791 data
.org 0x113792
	.byte 0x21	@ 00113792 data
.org 0x113793
	.byte 0x1c	@ 00113793 data
.org 0x113794
	.byte 0xee	@ 00113794 data
.org 0x113795
	.byte 0xf6	@ 00113795 data
.org 0x113796
	.byte 0xcc	@ 00113796 data
.org 0x113797
	.byte 0xfa	@ 00113797 data
.org 0x113798
	.byte 0x1b	@ 00113798 data
.org 0x113799
	.byte 0x48	@ 00113799 data
.org 0x11379a
	.byte 0x00	@ 0011379a data
.org 0x11379b
	.byte 0x21	@ 0011379b data
.org 0x11379c
	.byte 0xee	@ 0011379c data
.org 0x11379d
	.byte 0xf6	@ 0011379d data
.org 0x11379e
	.byte 0x34	@ 0011379e data
.org 0x11379f
	.byte 0xfd	@ 0011379f data
.org 0x1137a0
	.byte 0x1a	@ 001137a0 data
.org 0x1137a1
	.byte 0x49	@ 001137a1 data
.org 0x1137a2
	.byte 0x00	@ 001137a2 data
.org 0x1137a3
	.byte 0x96	@ 001137a3 data
.org 0x1137a4
	.byte 0x12	@ 001137a4 data
.org 0x1137a5
	.byte 0x20	@ 001137a5 data
.org 0x1137a6
	.byte 0x82	@ 001137a6 data
.org 0x1137a7
	.byte 0x22	@ 001137a7 data
.org 0x1137a8
	.byte 0x00	@ 001137a8 data
.org 0x1137a9
	.byte 0x23	@ 001137a9 data
.org 0x1137aa
	.byte 0xee	@ 001137aa data
.org 0x1137ab
	.byte 0xf6	@ 001137ab data
.org 0x1137ac
	.byte 0xc3	@ 001137ac data
.org 0x1137ad
	.byte 0xff	@ 001137ad data
.org 0x1137ae
	.byte 0xff	@ 001137ae data
.org 0x1137af
	.byte 0xf7	@ 001137af data
.org 0x1137b0
	.byte 0x87	@ 001137b0 data
.org 0x1137b1
	.byte 0xf8	@ 001137b1 data
.org 0x1137b2
	.byte 0x40	@ 001137b2 data
.org 0x1137b3
	.byte 0x20	@ 001137b3 data
.org 0x1137b4
	.byte 0xb8	@ 001137b4 data
.org 0x1137b5
	.byte 0x80	@ 001137b5 data
.org 0x1137b6
	.byte 0x80	@ 001137b6 data
.org 0x1137b7
	.byte 0x20	@ 001137b7 data
.org 0x1137b8
	.byte 0x40	@ 001137b8 data
.org 0x1137b9
	.byte 0x01	@ 001137b9 data
.org 0x1137ba
	.byte 0xf8	@ 001137ba data
.org 0x1137bb
	.byte 0x80	@ 001137bb data
.org 0x1137bc
	.byte 0xb8	@ 001137bc data
.org 0x1137bd
	.byte 0x78	@ 001137bd data
.org 0x1137be
	.byte 0x01	@ 001137be data
.org 0x1137bf
	.byte 0x30	@ 001137bf data
