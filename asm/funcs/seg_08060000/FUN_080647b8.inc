@ FUN_080647b8  entry 0x080647b8  size 210
.thumb
.org 0x647b8
FUN_080647b8:
	push {r4, r5, r6, r7, lr}	@ 000647b8 f0b5
.org 0x647ba
	mov r7, sl	@ 000647ba 5746
.org 0x647bc
	mov r6, r9	@ 000647bc 4e46
.org 0x647be
	mov r5, r8	@ 000647be 4546
.org 0x647c0
	push {r5, r6, r7}	@ 000647c0 e0b4
.org 0x647c2
	sub sp, #12	@ 000647c2 83b0
.org 0x647c4
	adds r6, r0, #0	@ 000647c4 061c
.org 0x647c6
	ldrb r0, [r6, #10]	@ 000647c6 b07a
.org 0x647c8
	lsrs r0, r0, #4	@ 000647c8 0009
.org 0x647ca
	mov r8, r0	@ 000647ca 8046
.org 0x647cc
	movs r0, #1	@ 000647cc 0120
.org 0x647ce
	mov r1, r8	@ 000647ce 4146
.org 0x647d0
	ands r1, r0	@ 000647d0 0140
.org 0x647d2
	mov r8, r1	@ 000647d2 8846
.org 0x647d4
	ldrb r0, [r6, #15]	@ 000647d4 f07b
.org 0x647d6
	cmp r0, #5	@ 000647d6 0528
.org 0x647d8
	bls.n 0x647dc	@ 000647d8 00d9
.org 0x647da
	b.n 0x649a4	@ 000647da e3e0
.org 0x647dc
	lsls r0, r0, #2	@ 000647dc 8000
.org 0x647de
	ldr r1, [pc, #8]	@ 000647de 0249
.org 0x647e0
	adds r0, r0, r1	@ 000647e0 4018
.org 0x647e2
	ldr r0, [r0, #0]	@ 000647e2 0068
.org 0x647e4
	mov pc, r0	@ 000647e4 8746
.org 0x647e6
	.byte 0x00	@ 000647e6 data
.org 0x647e7
	.byte 0x00	@ 000647e7 data
.org 0x647e8
	.byte 0xec,0x47,0x06,0x08	@ 000647e8 data
.org 0x647ec
	.byte 0x04,0x48,0x06,0x08	@ 000647ec data
.org 0x647f0
	.byte 0x88,0x48,0x06,0x08	@ 000647f0 data
.org 0x647f4
	.byte 0xca,0x48,0x06,0x08	@ 000647f4 data
.org 0x647f8
	.byte 0xe0,0x48,0x06,0x08	@ 000647f8 data
.org 0x647fc
	.byte 0x6c,0x49,0x06,0x08	@ 000647fc data
.org 0x64800
	.byte 0x72,0x49,0x06,0x08	@ 00064800 data
.org 0x64804
	.byte 0x88	@ 00064804 data
.org 0x64805
	.byte 0x20	@ 00064805 data
.org 0x64806
	.byte 0x40	@ 00064806 data
.org 0x64807
	.byte 0x00	@ 00064807 data
.org 0x64808
	.byte 0x9e	@ 00064808 data
.org 0x64809
	.byte 0xf7	@ 00064809 data
.org 0x6480a
	.byte 0x82	@ 0006480a data
.org 0x6480b
	.byte 0xf9	@ 0006480b data
.org 0x6480c
	.byte 0x30	@ 0006480c data
.org 0x6480d
	.byte 0x1c	@ 0006480d data
.org 0x6480e
	.byte 0x54	@ 0006480e data
.org 0x6480f
	.byte 0x30	@ 0006480f data
.org 0x64810
	.byte 0x01	@ 00064810 data
.org 0x64811
	.byte 0x21	@ 00064811 data
.org 0x64812
	.byte 0x02	@ 00064812 data
.org 0x64813
	.byte 0x22	@ 00064813 data
.org 0x64814
	.byte 0x01	@ 00064814 data
.org 0x64815
	.byte 0xf0	@ 00064815 data
.org 0x64816
	.byte 0x52	@ 00064816 data
.org 0x64817
	.byte 0xfe	@ 00064817 data
.org 0x64818
	.byte 0xc1	@ 00064818 data
.org 0x64819
	.byte 0x46	@ 00064819 data
.org 0x6481a
	.byte 0x00	@ 0006481a data
.org 0x6481b
	.byte 0x22	@ 0006481b data
.org 0x6481c
	.byte 0x92	@ 0006481c data
.org 0x6481d
	.byte 0x46	@ 0006481d data
.org 0x6481e
	.byte 0x43	@ 0006481e data
.org 0x6481f
	.byte 0x46	@ 0006481f data
.org 0x64820
	.byte 0x58	@ 00064820 data
.org 0x64821
	.byte 0x00	@ 00064821 data
.org 0x64822
	.byte 0x45	@ 00064822 data
.org 0x64823
	.byte 0x1e	@ 00064823 data
.org 0x64824
	.byte 0x00	@ 00064824 data
.org 0x64825
	.byte 0x2b	@ 00064825 data
.org 0x64826
	.byte 0x06	@ 00064826 data
.org 0x64827
	.byte 0xd0	@ 00064827 data
.org 0x64828
	.byte 0x30	@ 00064828 data
.org 0x64829
	.byte 0x1c	@ 00064829 data
.org 0x6482a
	.byte 0xd0	@ 0006482a data
.org 0x6482b
	.byte 0x30	@ 0006482b data
.org 0x6482c
	.byte 0x00	@ 0006482c data
.org 0x6482d
	.byte 0x68	@ 0006482d data
.org 0x6482e
	.byte 0xc8	@ 0006482e data
.org 0x6482f
	.byte 0x24	@ 0006482f data
.org 0x64830
	.byte 0x24	@ 00064830 data
.org 0x64831
	.byte 0x02	@ 00064831 data
.org 0x64832
	.byte 0x02	@ 00064832 data
.org 0x64833
	.byte 0x19	@ 00064833 data
.org 0x64834
	.byte 0x05	@ 00064834 data
.org 0x64835
	.byte 0xe0	@ 00064835 data
.org 0x64836
	.byte 0x30	@ 00064836 data
.org 0x64837
	.byte 0x1c	@ 00064837 data
.org 0x64838
	.byte 0xd0	@ 00064838 data
.org 0x64839
	.byte 0x30	@ 00064839 data
.org 0x6483a
	.byte 0x00	@ 0006483a data
.org 0x6483b
	.byte 0x68	@ 0006483b data
.org 0x6483c
	.byte 0xa0	@ 0006483c data
.org 0x6483d
	.byte 0x21	@ 0006483d data
.org 0x6483e
	.byte 0x89	@ 0006483e data
.org 0x6483f
	.byte 0x01	@ 0006483f data
.org 0x64840
	.byte 0x42	@ 00064840 data
.org 0x64841
	.byte 0x18	@ 00064841 data
.org 0x64842
	.byte 0xad	@ 00064842 data
.org 0x64843
	.byte 0x02	@ 00064843 data
.org 0x64844
	.byte 0xf5	@ 00064844 data
.org 0x64845
	.byte 0x65	@ 00064845 data
.org 0x64846
	.byte 0x74	@ 00064846 data
.org 0x64847
	.byte 0x6d	@ 00064847 data
.org 0x64848
	.byte 0x14	@ 00064848 data
.org 0x64849
	.byte 0x1b	@ 00064849 data
.org 0x6484a
	.byte 0x20	@ 0006484a data
.org 0x6484b
	.byte 0x1c	@ 0006484b data
.org 0x6484c
	.byte 0x29	@ 0006484c data
.org 0x6484d
	.byte 0x1c	@ 0006484d data
.org 0x6484e
	.byte 0xc4	@ 0006484e data
.org 0x6484f
	.byte 0xf0	@ 0006484f data
.org 0x64850
	.byte 0xb3	@ 00064850 data
.org 0x64851
	.byte 0xfb	@ 00064851 data
.org 0x64852
	.byte 0x07	@ 00064852 data
.org 0x64853
	.byte 0x1c	@ 00064853 data
.org 0x64854
	.byte 0x77	@ 00064854 data
.org 0x64855
	.byte 0x66	@ 00064855 data
.org 0x64856
	.byte 0x20	@ 00064856 data
.org 0x64857
	.byte 0x1c	@ 00064857 data
.org 0x64858
	.byte 0x29	@ 00064858 data
.org 0x64859
	.byte 0x1c	@ 00064859 data
.org 0x6485a
	.byte 0xc4	@ 0006485a data
.org 0x6485b
	.byte 0xf0	@ 0006485b data
.org 0x6485c
	.byte 0xf9	@ 0006485c data
.org 0x6485d
	.byte 0xfb	@ 0006485d data
.org 0x6485e
	.byte 0x00	@ 0006485e data
.org 0x6485f
	.byte 0x28	@ 0006485f data
.org 0x64860
	.byte 0x01	@ 00064860 data
.org 0x64861
	.byte 0xd0	@ 00064861 data
.org 0x64862
	.byte 0x78	@ 00064862 data
.org 0x64863
	.byte 0x1c	@ 00064863 data
.org 0x64864
	.byte 0x70	@ 00064864 data
.org 0x64865
	.byte 0x66	@ 00064865 data
.org 0x64866
	.byte 0x70	@ 00064866 data
.org 0x64867
	.byte 0x6e	@ 00064867 data
.org 0x64868
	.byte 0xc1	@ 00064868 data
.org 0x64869
	.byte 0x0f	@ 00064869 data
.org 0x6486a
	.byte 0x40	@ 0006486a data
.org 0x6486b
	.byte 0x18	@ 0006486b data
.org 0x6486c
	.byte 0x40	@ 0006486c data
.org 0x6486d
	.byte 0x10	@ 0006486d data
.org 0x6486e
	.byte 0x70	@ 0006486e data
.org 0x6486f
	.byte 0x66	@ 0006486f data
.org 0x64870
	.byte 0x00	@ 00064870 data
.org 0x64871
	.byte 0x21	@ 00064871 data
.org 0x64872
	.byte 0x31	@ 00064872 data
.org 0x64873
	.byte 0x66	@ 00064873 data
.org 0x64874
	.byte 0x01	@ 00064874 data
.org 0x64875
	.byte 0x22	@ 00064875 data
.org 0x64876
	.byte 0x52	@ 00064876 data
.org 0x64877
	.byte 0x42	@ 00064877 data
.org 0x64878
	.byte 0x90	@ 00064878 data
.org 0x64879
	.byte 0x01	@ 00064879 data
.org 0x6487a
	.byte 0xb0	@ 0006487a data
.org 0x6487b
	.byte 0x66	@ 0006487b data
.org 0x6487c
	.byte 0xb1	@ 0006487c data
.org 0x6487d
	.byte 0x74	@ 0006487d data
.org 0x6487e
	.byte 0x4b	@ 0006487e data
.org 0x6487f
	.byte 0x46	@ 0006487f data
.org 0x64880
	.byte 0xf3	@ 00064880 data
.org 0x64881
	.byte 0x74	@ 00064881 data
.org 0x64882
	.byte 0xf0	@ 00064882 data
.org 0x64883
	.byte 0x7b	@ 00064883 data
.org 0x64884
	.byte 0x01	@ 00064884 data
.org 0x64885
	.byte 0x30	@ 00064885 data
.org 0x64886
	.byte 0xf0	@ 00064886 data
.org 0x64887
	.byte 0x73	@ 00064887 data
.org 0x64888
	.byte 0x70	@ 00064888 data
.org 0x64889
	.byte 0x6e	@ 00064889 data
