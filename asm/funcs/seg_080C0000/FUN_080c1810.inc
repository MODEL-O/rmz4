@ FUN_080c1810  entry 0x080c1810  size 120
.thumb
.org 0xc1810
FUN_080c1810:
	push {r4, r5, lr}	@ 000c1810 30b5
.org 0xc1812
	adds r4, r0, #0	@ 000c1812 041c
.org 0xc1814
	ldr r5, [r4, #40]	@ 000c1814 a56a
.org 0xc1816
	ldrb r0, [r4, #15]	@ 000c1816 e07b
.org 0xc1818
	cmp r0, #0	@ 000c1818 0028
.org 0xc181a
	bne.n 0xc182e	@ 000c181a 08d1
.org 0xc181c
	adds r1, r4, #0	@ 000c181c 211c
.org 0xc181e
	adds r1, #180	@ 000c181e b431
.org 0xc1820
	movs r0, #1	@ 000c1820 0120
.org 0xc1822
	strb r0, [r1, #0]	@ 000c1822 0870
.org 0xc1824
	movs r0, #8	@ 000c1824 0820
.org 0xc1826
	strb r0, [r4, #18]	@ 000c1826 a074
.org 0xc1828
	ldrb r0, [r4, #15]	@ 000c1828 e07b
.org 0xc182a
	adds r0, #1	@ 000c182a 0130
.org 0xc182c
	strb r0, [r4, #15]	@ 000c182c e073
.org 0xc182e
	ldrb r0, [r4, #18]	@ 000c182e a07c
.org 0xc1830
	subs r0, #1	@ 000c1830 0138
.org 0xc1832
	strb r0, [r4, #18]	@ 000c1832 a074
.org 0xc1834
	lsls r0, r0, #24	@ 000c1834 0006
.org 0xc1836
	lsrs r0, r0, #24	@ 000c1836 000e
.org 0xc1838
	cmp r0, #3	@ 000c1838 0328
.org 0xc183a
	bhi.n 0xc184c	@ 000c183a 07d8
.org 0xc183c
	ldr r1, [pc, #8]	@ 000c183c 0249
.org 0xc183e
	adds r0, r4, #0	@ 000c183e 201c
.org 0xc1840
	bl 0x1cf00	@ 000c1840 5bf75efb
.org 0xc1844
	b.n 0xc1854	@ 000c1844 06e0
.org 0xc1846
	.byte 0x00	@ 000c1846 data
.org 0xc1847
	.byte 0x00	@ 000c1847 data
.org 0xc1848
	.byte 0x0c,0x90,0x00,0x00	@ 000c1848 data
.org 0xc184c
	ldr r1, [pc, #32]	@ 000c184c 0849
.org 0xc184e
	adds r0, r4, #0	@ 000c184e 201c
.org 0xc1850
	bl 0x1cf00	@ 000c1850 5bf756fb
.org 0xc1854
	adds r0, r4, #0	@ 000c1854 201c
.org 0xc1856
	bl 0x1cff0	@ 000c1856 5bf7cbfb
.org 0xc185a
	adds r0, r5, #0	@ 000c185a 281c
.org 0xc185c
	adds r0, #200	@ 000c185c c830
.org 0xc185e
	ldrb r0, [r0, #0]	@ 000c185e 0078
.org 0xc1860
	cmp r0, #0	@ 000c1860 0028
.org 0xc1862
	beq.n 0xc1878	@ 000c1862 09d0
.org 0xc1864
	adds r0, r4, #0	@ 000c1864 201c
.org 0xc1866
	adds r0, #116	@ 000c1866 7430
.org 0xc1868
	ldr r1, [pc, #8]	@ 000c1868 0249
.org 0xc186a
	bl 0x5784	@ 000c186a 43f78bff
.org 0xc186e
	b.n 0xc1882	@ 000c186e 08e0
.org 0xc1870
	.byte 0x0b,0x90,0x00,0x00	@ 000c1870 data
.org 0xc1874
	.byte 0x6c,0x52,0x86,0x08	@ 000c1874 data
.org 0xc1878
	adds r0, r4, #0	@ 000c1878 201c
.org 0xc187a
	adds r0, #116	@ 000c187a 7430
.org 0xc187c
	ldr r1, [pc, #24]	@ 000c187c 0649
.org 0xc187e
	bl 0x5784	@ 000c187e 43f781ff
.org 0xc1882
	ldrb r1, [r4, #18]	@ 000c1882 a17c
.org 0xc1884
	cmp r1, #0	@ 000c1884 0029
.org 0xc1886
	bne.n 0xc1890	@ 000c1886 03d1
