@ FUN_080a97d0  entry 0x080a97d0  size 144
.thumb
.org 0xa97d0
FUN_080a97d0:
	push {r4, r5, r6, lr}	@ 000a97d0 70b5
.org 0xa97d2
	adds r5, r0, #0	@ 000a97d2 051c
.org 0xa97d4
	bl 0x1cc9c	@ 000a97d4 73f762fa
.org 0xa97d8
	ldrb r1, [r5, #10]	@ 000a97d8 a97a
.org 0xa97da
	movs r0, #1	@ 000a97da 0120
.org 0xa97dc
	movs r6, #0	@ 000a97dc 0026
.org 0xa97de
	orrs r0, r1	@ 000a97de 0843
.org 0xa97e0
	movs r1, #2	@ 000a97e0 0221
.org 0xa97e2
	orrs r0, r1	@ 000a97e2 0843
.org 0xa97e4
	movs r1, #4	@ 000a97e4 0421
.org 0xa97e6
	orrs r0, r1	@ 000a97e6 0843
.org 0xa97e8
	strb r0, [r5, #10]	@ 000a97e8 a872
.org 0xa97ea
	adds r4, r5, #0	@ 000a97ea 2c1c
.org 0xa97ec
	adds r4, #116	@ 000a97ec 7434
.org 0xa97ee
	ldr r1, [pc, #112]	@ 000a97ee 1c49
.org 0xa97f0
	adds r2, r5, #0	@ 000a97f0 2a1c
.org 0xa97f2
	adds r2, #84	@ 000a97f2 5432
.org 0xa97f4
	adds r0, r4, #0	@ 000a97f4 201c
.org 0xa97f6
	movs r3, #6	@ 000a97f6 0623
.org 0xa97f8
	bl 0x5760	@ 000a97f8 5bf7b2ff
.org 0xa97fc
	str r5, [r4, #44]	@ 000a97fc e562
.org 0xa97fe
	ldr r0, [pc, #100]	@ 000a97fe 1948
.org 0xa9800
	str r0, [r4, #36]	@ 000a9800 6062
.org 0xa9802
	ldr r1, [pc, #100]	@ 000a9802 1949
.org 0xa9804
	ldrb r0, [r5, #9]	@ 000a9804 687a
.org 0xa9806
	lsls r0, r0, #2	@ 000a9806 8000
.org 0xa9808
	adds r0, r0, r1	@ 000a9808 4018
.org 0xa980a
	movs r1, #1	@ 000a980a 0121
.org 0xa980c
	str r1, [r5, #12]	@ 000a980c e960
.org 0xa980e
	ldr r0, [r0, #0]	@ 000a980e 0068
.org 0xa9810
	ldr r0, [r0, #4]	@ 000a9810 4068
.org 0xa9812
	str r0, [r5, #20]	@ 000a9812 6861
.org 0xa9814
	adds r2, r5, #0	@ 000a9814 2a1c
.org 0xa9816
	adds r2, #188	@ 000a9816 bc32
.org 0xa9818
	strb r6, [r2, #0]	@ 000a9818 1670
.org 0xa981a
	adds r0, r5, #0	@ 000a981a 281c
.org 0xa981c
	adds r0, #180	@ 000a981c b430
.org 0xa981e
	strb r6, [r0, #0]	@ 000a981e 0670
.org 0xa9820
	adds r0, #1	@ 000a9820 0130
.org 0xa9822
	strb r6, [r0, #0]	@ 000a9822 0670
.org 0xa9824
	adds r0, #1	@ 000a9824 0130
.org 0xa9826
	strb r1, [r0, #0]	@ 000a9826 0170
.org 0xa9828
	adds r0, #1	@ 000a9828 0130
.org 0xa982a
	strb r6, [r0, #0]	@ 000a982a 0670
.org 0xa982c
	adds r0, #9	@ 000a982c 0930
.org 0xa982e
	str r6, [r0, #0]	@ 000a982e 0660
.org 0xa9830
	adds r1, r5, #0	@ 000a9830 291c
.org 0xa9832
	adds r1, #184	@ 000a9832 b831
.org 0xa9834
	movs r0, #128	@ 000a9834 8020
.org 0xa9836
	lsls r0, r0, #2	@ 000a9836 8000
.org 0xa9838
	str r0, [r1, #0]	@ 000a9838 0860
.org 0xa983a
	ldrb r0, [r5, #16]	@ 000a983a 287c
.org 0xa983c
	cmp r0, #1	@ 000a983c 0128
.org 0xa983e
	bne.n 0xa9844	@ 000a983e 01d1
.org 0xa9840
	movs r0, #12	@ 000a9840 0c20
.org 0xa9842
	strb r0, [r2, #0]	@ 000a9842 1070
.org 0xa9844
	ldr r0, [r5, #84]	@ 000a9844 686d
.org 0xa9846
	ldr r1, [r5, #88]	@ 000a9846 a96d
.org 0xa9848
	bl 0x8534	@ 000a9848 5ef774fe
.org 0xa984c
	str r0, [r5, #88]	@ 000a984c a865
.org 0xa984e
	movs r0, #4	@ 000a984e 0420
.org 0xa9850
	strb r0, [r5, #13]	@ 000a9850 6873
.org 0xa9852
	strb r6, [r5, #14]	@ 000a9852 ae73
.org 0xa9854
	adds r0, r5, #0	@ 000a9854 281c
.org 0xa9856
	bl 0xa986c	@ 000a9856 00f009f8
.org 0xa985a
	pop {r4, r5, r6}	@ 000a985a 70bc
.org 0xa985c
	pop {r0}	@ 000a985c 01bc
.org 0xa985e
	bx r0	@ 000a985e 0047
