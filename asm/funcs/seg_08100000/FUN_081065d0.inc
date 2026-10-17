@ FUN_081065d0  entry 0x081065d0  size 342
.thumb
.org 0x1065d0
FUN_081065d0:
	push {r4, r5, lr}	@ 001065d0 30b5
.org 0x1065d2
	adds r4, r0, #0	@ 001065d2 041c
.org 0x1065d4
	movs r5, #0	@ 001065d4 0025
.org 0x1065d6
	ldrb r0, [r4, #13]	@ 001065d6 607b
.org 0x1065d8
	cmp r0, #15	@ 001065d8 0f28
.org 0x1065da
	bls.n 0x1065de	@ 001065da 00d9
.org 0x1065dc
	b.n 0x106896	@ 001065dc 5be1
.org 0x1065de
	lsls r0, r0, #2	@ 001065de 8000
.org 0x1065e0
	ldr r1, [pc, #4]	@ 001065e0 0149
.org 0x1065e2
	adds r0, r0, r1	@ 001065e2 4018
.org 0x1065e4
	ldr r0, [r0, #0]	@ 001065e4 0068
.org 0x1065e6
	mov pc, r0	@ 001065e6 8746
.org 0x1065e8
	.byte 0xec,0x65,0x10,0x08	@ 001065e8 data
.org 0x1065ec
	.byte 0x2c,0x66,0x10,0x08	@ 001065ec data
.org 0x1065f0
	.byte 0x36,0x66,0x10,0x08	@ 001065f0 data
.org 0x1065f4
	.byte 0x5c,0x66,0x10,0x08	@ 001065f4 data
.org 0x1065f8
	.byte 0x76,0x66,0x10,0x08	@ 001065f8 data
.org 0x1065fc
	.byte 0xc0,0x66,0x10,0x08	@ 001065fc data
.org 0x106600
	.byte 0xe8,0x66,0x10,0x08	@ 00106600 data
.org 0x106604
	.byte 0x16,0x67,0x10,0x08	@ 00106604 data
.org 0x106608
	.byte 0x34,0x67,0x10,0x08	@ 00106608 data
.org 0x10660c
	.byte 0x54,0x67,0x10,0x08	@ 0010660c data
.org 0x106610
	.byte 0x94,0x67,0x10,0x08	@ 00106610 data
.org 0x106614
	.byte 0xbc,0x67,0x10,0x08	@ 00106614 data
.org 0x106618
	.byte 0xe4,0x67,0x10,0x08	@ 00106618 data
.org 0x10661c
	.byte 0x24,0x68,0x10,0x08	@ 0010661c data
.org 0x106620
	.byte 0x48,0x68,0x10,0x08	@ 00106620 data
.org 0x106624
	.byte 0x60,0x68,0x10,0x08	@ 00106624 data
.org 0x106628
	.byte 0x90,0x68,0x10,0x08	@ 00106628 data
.org 0x10662c
	.byte 0x00	@ 0010662c data
.org 0x10662d
	.byte 0x20	@ 0010662d data
.org 0x10662e
	.byte 0xa0	@ 0010662e data
.org 0x10662f
	.byte 0x62	@ 0010662f data
.org 0x106630
	.byte 0x60	@ 00106630 data
.org 0x106631
	.byte 0x7b	@ 00106631 data
.org 0x106632
	.byte 0x01	@ 00106632 data
.org 0x106633
	.byte 0x30	@ 00106633 data
.org 0x106634
	.byte 0x60	@ 00106634 data
.org 0x106635
	.byte 0x73	@ 00106635 data
.org 0x106636
	.byte 0x08	@ 00106636 data
.org 0x106637
	.byte 0x49	@ 00106637 data
.org 0x106638
	.byte 0x20	@ 00106638 data
.org 0x106639
	.byte 0x1c	@ 00106639 data
.org 0x10663a
	.byte 0x01	@ 0010663a data
.org 0x10663b
	.byte 0x22	@ 0010663b data
.org 0x10663c
	.byte 0xff	@ 0010663c data
.org 0x10663d
	.byte 0xf7	@ 0010663d data
.org 0x10663e
	.byte 0x8a	@ 0010663e data
.org 0x10663f
	.byte 0xf9	@ 0010663f data
.org 0x106640
	.byte 0x00	@ 00106640 data
.org 0x106641
	.byte 0x04	@ 00106641 data
.org 0x106642
	.byte 0x00	@ 00106642 data
.org 0x106643
	.byte 0x28	@ 00106643 data
.org 0x106644
	.byte 0x00	@ 00106644 data
.org 0x106645
	.byte 0xd1	@ 00106645 data
.org 0x106646
	.byte 0x26	@ 00106646 data
.org 0x106647
	.byte 0xe1	@ 00106647 data
.org 0x106648
	.byte 0xa0	@ 00106648 data
.org 0x106649
	.byte 0x6d	@ 00106649 data
.org 0x10664a
	.byte 0x20	@ 0010664a data
.org 0x10664b
	.byte 0x66	@ 0010664b data
.org 0x10664c
	.byte 0x21	@ 0010664c data
.org 0x10664d
	.byte 0x1c	@ 0010664d data
.org 0x10664e
	.byte 0x25	@ 0010664e data
.org 0x10664f
	.byte 0x31	@ 0010664f data
.org 0x106650
	.byte 0x02	@ 00106650 data
.org 0x106651
	.byte 0x20	@ 00106651 data
.org 0x106652
	.byte 0x08	@ 00106652 data
.org 0x106653
	.byte 0x70	@ 00106653 data
.org 0x106654
	.byte 0x16	@ 00106654 data
.org 0x106655
	.byte 0xe1	@ 00106655 data
.org 0x106656
	.byte 0x00	@ 00106656 data
.org 0x106657
	.byte 0x00	@ 00106657 data
.org 0x106658
	.byte 0x09	@ 00106658 data
.org 0x106659
	.byte 0xcc	@ 00106659 data
.org 0x10665a
	.byte 0x00	@ 0010665a data
.org 0x10665b
	.byte 0x00	@ 0010665b data
.org 0x10665c
	.byte 0x20	@ 0010665c data
.org 0x10665d
	.byte 0x1c	@ 0010665d data
.org 0x10665e
	.byte 0x16	@ 0010665e data
.org 0x10665f
	.byte 0xf7	@ 0010665f data
.org 0x106660
	.byte 0xc7	@ 00106660 data
.org 0x106661
	.byte 0xfc	@ 00106661 data
.org 0x106662
	.byte 0xa0	@ 00106662 data
.org 0x106663
	.byte 0x69	@ 00106663 data
.org 0x106664
	.byte 0x41	@ 00106664 data
.org 0x106665
	.byte 0x7a	@ 00106665 data
.org 0x106666
	.byte 0x01	@ 00106666 data
.org 0x106667
	.byte 0x20	@ 00106667 data
.org 0x106668
	.byte 0x08	@ 00106668 data
.org 0x106669
	.byte 0x40	@ 00106669 data
.org 0x10666a
	.byte 0x00	@ 0010666a data
.org 0x10666b
	.byte 0x28	@ 0010666b data
.org 0x10666c
	.byte 0x00	@ 0010666c data
.org 0x10666d
	.byte 0xd1	@ 0010666d data
.org 0x10666e
	.byte 0x12	@ 0010666e data
.org 0x10666f
	.byte 0xe1	@ 0010666f data
.org 0x106670
	.byte 0x00	@ 00106670 data
.org 0x106671
	.byte 0x20	@ 00106671 data
.org 0x106672
	.byte 0xa0	@ 00106672 data
.org 0x106673
	.byte 0x74	@ 00106673 data
.org 0x106674
	.byte 0x06	@ 00106674 data
.org 0x106675
	.byte 0xe1	@ 00106675 data
.org 0x106676
	.byte 0x20	@ 00106676 data
.org 0x106677
	.byte 0x1c	@ 00106677 data
.org 0x106678
	.byte 0x16	@ 00106678 data
.org 0x106679
	.byte 0xf7	@ 00106679 data
.org 0x10667a
	.byte 0xba	@ 0010667a data
.org 0x10667b
	.byte 0xfc	@ 0010667b data
.org 0x10667c
	.byte 0x0e	@ 0010667c data
.org 0x10667d
	.byte 0x49	@ 0010667d data
.org 0x10667e
	.byte 0xa2	@ 0010667e data
.org 0x10667f
	.byte 0x7c	@ 0010667f data
.org 0x106680
	.byte 0x10	@ 00106680 data
.org 0x106681
	.byte 0x1c	@ 00106681 data
.org 0x106682
	.byte 0x40	@ 00106682 data
.org 0x106683
	.byte 0x30	@ 00106683 data
.org 0x106684
	.byte 0x00	@ 00106684 data
.org 0x106685
	.byte 0x06	@ 00106685 data
.org 0x106686
	.byte 0xc0	@ 00106686 data
.org 0x106687
	.byte 0x0d	@ 00106687 data
.org 0x106688
	.byte 0x40	@ 00106688 data
.org 0x106689
	.byte 0x18	@ 00106689 data
.org 0x10668a
	.byte 0x00	@ 0010668a data
.org 0x10668b
	.byte 0x23	@ 0010668b data
.org 0x10668c
	.byte 0xc1	@ 0010668c data
.org 0x10668d
	.byte 0x5e	@ 0010668d data
.org 0x10668e
	.byte 0x80	@ 0010668e data
.org 0x10668f
	.byte 0x20	@ 0010668f data
.org 0x106690
	.byte 0x40	@ 00106690 data
.org 0x106691
	.byte 0x00	@ 00106691 data
.org 0x106692
	.byte 0x09	@ 00106692 data
.org 0x106693
	.byte 0x18	@ 00106693 data
.org 0x106694
	.byte 0xc8	@ 00106694 data
.org 0x106695
	.byte 0x00	@ 00106695 data
.org 0x106696
	.byte 0x40	@ 00106696 data
.org 0x106697
	.byte 0x1a	@ 00106697 data
.org 0x106698
	.byte 0x80	@ 00106698 data
.org 0x106699
	.byte 0x00	@ 00106699 data
.org 0x10669a
	.byte 0x40	@ 0010669a data
.org 0x10669b
	.byte 0x1a	@ 0010669b data
.org 0x10669c
	.byte 0x21	@ 0010669c data
.org 0x10669d
	.byte 0x6e	@ 0010669d data
.org 0x10669e
	.byte 0x09	@ 0010669e data
.org 0x10669f
	.byte 0x18	@ 0010669f data
.org 0x1066a0
	.byte 0x06	@ 001066a0 data
.org 0x1066a1
	.byte 0x4b	@ 001066a1 data
.org 0x1066a2
	.byte 0xc9	@ 001066a2 data
.org 0x1066a3
	.byte 0x18	@ 001066a3 data
.org 0x1066a4
	.byte 0xa1	@ 001066a4 data
.org 0x1066a5
	.byte 0x65	@ 001066a5 data
.org 0x1066a6
	.byte 0x01	@ 001066a6 data
.org 0x1066a7
	.byte 0x32	@ 001066a7 data
.org 0x1066a8
	.byte 0xa2	@ 001066a8 data
.org 0x1066a9
	.byte 0x74	@ 001066a9 data
.org 0x1066aa
	.byte 0x12	@ 001066aa data
.org 0x1066ab
	.byte 0x06	@ 001066ab data
.org 0x1066ac
	.byte 0x00	@ 001066ac data
.org 0x1066ad
	.byte 0x2a	@ 001066ad data
.org 0x1066ae
	.byte 0x00	@ 001066ae data
.org 0x1066af
	.byte 0xdb	@ 001066af data
.org 0x1066b0
	.byte 0xf1	@ 001066b0 data
.org 0x1066b1
	.byte 0xe0	@ 001066b1 data
.org 0x1066b2
	.byte 0x08	@ 001066b2 data
.org 0x1066b3
	.byte 0x20	@ 001066b3 data
.org 0x1066b4
	.byte 0xa0	@ 001066b4 data
.org 0x1066b5
	.byte 0x74	@ 001066b5 data
.org 0x1066b6
	.byte 0xe5	@ 001066b6 data
.org 0x1066b7
	.byte 0xe0	@ 001066b7 data
.org 0x1066b8
	.byte 0x0c	@ 001066b8 data
.org 0x1066b9
	.byte 0x93	@ 001066b9 data
.org 0x1066ba
	.byte 0x12	@ 001066ba data
.org 0x1066bb
	.byte 0x08	@ 001066bb data
.org 0x1066bc
	.byte 0x00	@ 001066bc data
.org 0x1066bd
	.byte 0xca	@ 001066bd data
.org 0x1066be
	.byte 0xff	@ 001066be data
.org 0x1066bf
	.byte 0xff	@ 001066bf data
.org 0x1066c0
	.byte 0x20	@ 001066c0 data
.org 0x1066c1
	.byte 0x1c	@ 001066c1 data
.org 0x1066c2
	.byte 0x16	@ 001066c2 data
.org 0x1066c3
	.byte 0xf7	@ 001066c3 data
.org 0x1066c4
	.byte 0x95	@ 001066c4 data
.org 0x1066c5
	.byte 0xfc	@ 001066c5 data
.org 0x1066c6
	.byte 0xa0	@ 001066c6 data
.org 0x1066c7
	.byte 0x7c	@ 001066c7 data
.org 0x1066c8
	.byte 0x01	@ 001066c8 data
.org 0x1066c9
	.byte 0x38	@ 001066c9 data
.org 0x1066ca
	.byte 0xa0	@ 001066ca data
.org 0x1066cb
	.byte 0x74	@ 001066cb data
.org 0x1066cc
	.byte 0x00	@ 001066cc data
.org 0x1066cd
	.byte 0x06	@ 001066cd data
.org 0x1066ce
	.byte 0x00	@ 001066ce data
.org 0x1066cf
	.byte 0x28	@ 001066cf data
.org 0x1066d0
	.byte 0x00	@ 001066d0 data
.org 0x1066d1
	.byte 0xd0	@ 001066d1 data
.org 0x1066d2
	.byte 0xe0	@ 001066d2 data
.org 0x1066d3
	.byte 0xe0	@ 001066d3 data
.org 0x1066d4
	.byte 0x03	@ 001066d4 data
.org 0x1066d5
	.byte 0x49	@ 001066d5 data
.org 0x1066d6
	.byte 0x20	@ 001066d6 data
.org 0x1066d7
	.byte 0x1c	@ 001066d7 data
.org 0x1066d8
	.byte 0x16	@ 001066d8 data
.org 0x1066d9
	.byte 0xf7	@ 001066d9 data
.org 0x1066da
	.byte 0x12	@ 001066da data
.org 0x1066db
	.byte 0xfc	@ 001066db data
.org 0x1066dc
	.byte 0x96	@ 001066dc data
.org 0x1066dd
	.byte 0x20	@ 001066dd data
.org 0x1066de
	.byte 0xa0	@ 001066de data
.org 0x1066df
	.byte 0x74	@ 001066df data
.org 0x1066e0
	.byte 0xd0	@ 001066e0 data
.org 0x1066e1
	.byte 0xe0	@ 001066e1 data
.org 0x1066e2
	.byte 0x00	@ 001066e2 data
.org 0x1066e3
	.byte 0x00	@ 001066e3 data
.org 0x1066e4
	.byte 0x0a	@ 001066e4 data
.org 0x1066e5
	.byte 0xcc	@ 001066e5 data
.org 0x1066e6
	.byte 0x00	@ 001066e6 data
.org 0x1066e7
	.byte 0x00	@ 001066e7 data
.org 0x1066e8
	.byte 0x20	@ 001066e8 data
.org 0x1066e9
	.byte 0x1c	@ 001066e9 data
.org 0x1066ea
	.byte 0x16	@ 001066ea data
.org 0x1066eb
	.byte 0xf7	@ 001066eb data
.org 0x1066ec
	.byte 0x81	@ 001066ec data
.org 0x1066ed
	.byte 0xfc	@ 001066ed data
.org 0x1066ee
	.byte 0xa0	@ 001066ee data
.org 0x1066ef
	.byte 0x7c	@ 001066ef data
.org 0x1066f0
	.byte 0x5a	@ 001066f0 data
.org 0x1066f1
	.byte 0x28	@ 001066f1 data
.org 0x1066f2
	.byte 0x03	@ 001066f2 data
.org 0x1066f3
	.byte 0xd0	@ 001066f3 data
.org 0x1066f4
	.byte 0x1e	@ 001066f4 data
.org 0x1066f5
	.byte 0x28	@ 001066f5 data
.org 0x1066f6
	.byte 0x01	@ 001066f6 data
.org 0x1066f7
	.byte 0xd0	@ 001066f7 data
.org 0x1066f8
	.byte 0x01	@ 001066f8 data
.org 0x1066f9
	.byte 0x28	@ 001066f9 data
.org 0x1066fa
	.byte 0x00	@ 001066fa data
.org 0x1066fb
	.byte 0xd1	@ 001066fb data
.org 0x1066fc
	.byte 0x01	@ 001066fc data
.org 0x1066fd
	.byte 0x25	@ 001066fd data
.org 0x1066fe
	.byte 0xa0	@ 001066fe data
.org 0x1066ff
	.byte 0x7c	@ 001066ff data
.org 0x106700
	.byte 0x01	@ 00106700 data
.org 0x106701
	.byte 0x38	@ 00106701 data
.org 0x106702
	.byte 0xa0	@ 00106702 data
.org 0x106703
	.byte 0x74	@ 00106703 data
.org 0x106704
	.byte 0x00	@ 00106704 data
.org 0x106705
	.byte 0x06	@ 00106705 data
.org 0x106706
	.byte 0x00	@ 00106706 data
.org 0x106707
	.byte 0x28	@ 00106707 data
.org 0x106708
	.byte 0x00	@ 00106708 data
.org 0x106709
	.byte 0xd0	@ 00106709 data
.org 0x10670a
	.byte 0xc4	@ 0010670a data
.org 0x10670b
	.byte 0xe0	@ 0010670b data
.org 0x10670c
	.byte 0x20	@ 0010670c data
.org 0x10670d
	.byte 0x1c	@ 0010670d data
.org 0x10670e
	.byte 0xe2	@ 0010670e data
.org 0x10670f
	.byte 0xf7	@ 0010670f data
.org 0x106710
	.byte 0x99	@ 00106710 data
.org 0x106711
	.byte 0xfa	@ 00106711 data
.org 0x106712
	.byte 0xe0	@ 00106712 data
.org 0x106713
	.byte 0x62	@ 00106713 data
.org 0x106714
	.byte 0xb6	@ 00106714 data
.org 0x106715
	.byte 0xe0	@ 00106715 data
.org 0x106716
	.byte 0x20	@ 00106716 data
.org 0x106717
	.byte 0x1c	@ 00106717 data
.org 0x106718
	.byte 0x16	@ 00106718 data
.org 0x106719
	.byte 0xf7	@ 00106719 data
.org 0x10671a
	.byte 0x6a	@ 0010671a data
.org 0x10671b
	.byte 0xfc	@ 0010671b data
.org 0x10671c
	.byte 0xa0	@ 0010671c data
.org 0x10671d
	.byte 0x69	@ 0010671d data
.org 0x10671e
	.byte 0x41	@ 0010671e data
.org 0x10671f
	.byte 0x7a	@ 0010671f data
.org 0x106720
	.byte 0x02	@ 00106720 data
.org 0x106721
	.byte 0x20	@ 00106721 data
.org 0x106722
	.byte 0x08	@ 00106722 data
.org 0x106723
	.byte 0x40	@ 00106723 data
.org 0x106724
	.byte 0x00	@ 00106724 data
.org 0x106725
	.byte 0x28	@ 00106725 data
