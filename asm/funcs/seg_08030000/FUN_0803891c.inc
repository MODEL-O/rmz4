@ FUN_0803891c  entry 0x0803891c  size 90
.thumb
.org 0x3891c
FUN_0803891c:
	push {lr}	@ 0003891c 00b5
.org 0x3891e
	adds r2, r0, #0	@ 0003891e 021c
.org 0x38920
	adds r2, #180	@ 00038920 b432
.org 0x38922
	ldr r1, [pc, #12]	@ 00038922 0349
.org 0x38924
	adds r0, r0, r1	@ 00038924 4018
.org 0x38926
	ldrb r0, [r0, #0]	@ 00038926 0078
.org 0x38928
	cmp r0, #0	@ 00038928 0028
.org 0x3892a
	beq.n 0x38934	@ 0003892a 03d0
.org 0x3892c
	movs r0, #13	@ 0003892c 0d20
.org 0x3892e
	b.n 0x38982	@ 0003892e 28e0
.org 0x38930
	.byte 0x7a,0x02,0x00,0x00	@ 00038930 data
.org 0x38934
	ldrb r0, [r2, #19]	@ 00038934 d07c
.org 0x38936
	cmp r0, #2	@ 00038936 0228
.org 0x38938
	bne.n 0x3893e	@ 00038938 01d1
.org 0x3893a
	movs r0, #11	@ 0003893a 0b20
.org 0x3893c
	b.n 0x38982	@ 0003893c 21e0
.org 0x3893e
	cmp r0, #1	@ 0003893e 0128
.org 0x38940
	bne.n 0x38946	@ 00038940 01d1
.org 0x38942
	movs r0, #10	@ 00038942 0a20
.org 0x38944
	b.n 0x38982	@ 00038944 1de0
.org 0x38946
	ldrb r0, [r2, #17]	@ 00038946 507c
.org 0x38948
	adds r1, r0, #0	@ 00038948 011c
.org 0x3894a
	cmp r1, #19	@ 0003894a 1329
.org 0x3894c
	bne.n 0x38974	@ 0003894c 12d1
.org 0x3894e
	ldr r0, [r2, #16]	@ 0003894e 1069
.org 0x38950
	ldr r1, [pc, #20]	@ 00038950 0549
.org 0x38952
	ands r0, r1	@ 00038952 0840
.org 0x38954
	ldr r1, [pc, #20]	@ 00038954 0549
.org 0x38956
	cmp r0, r1	@ 00038956 8842
.org 0x38958
	bne.n 0x38980	@ 00038958 12d1
.org 0x3895a
	ldr r0, [r2, #60]	@ 0003895a d06b
.org 0x3895c
	ldr r1, [pc, #16]	@ 0003895c 0449
.org 0x3895e
	ands r0, r1	@ 0003895e 0840
.org 0x38960
	cmp r0, #0	@ 00038960 0028
.org 0x38962
	bne.n 0x38980	@ 00038962 0dd1
.org 0x38964
	movs r0, #12	@ 00038964 0c20
.org 0x38966
	b.n 0x38982	@ 00038966 0ce0
.org 0x38968
	.byte 0xff,0x00,0xff,0x00	@ 00038968 data
.org 0x3896c
	.byte 0x09,0x00,0x1a,0x00	@ 0003896c data
.org 0x38970
	.byte 0x00,0xff,0xff,0xff	@ 00038970 data
.org 0x38974
	cmp r1, #255	@ 00038974 ff29
