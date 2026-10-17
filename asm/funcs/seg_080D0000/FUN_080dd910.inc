@ FUN_080dd910  entry 0x080dd910  size 94
.thumb
.org 0xdd910
FUN_080dd910:
	push {r4, lr}	@ 000dd910 10b5
.org 0xdd912
	adds r4, r0, #0	@ 000dd912 041c
.org 0xdd914
	bl 0x1cc9c	@ 000dd914 3ff7c2f9
.org 0xdd918
	ldrb r1, [r4, #10]	@ 000dd918 a17a
.org 0xdd91a
	movs r0, #1	@ 000dd91a 0120
.org 0xdd91c
	orrs r0, r1	@ 000dd91c 0843
.org 0xdd91e
	movs r1, #2	@ 000dd91e 0221
.org 0xdd920
	orrs r0, r1	@ 000dd920 0843
.org 0xdd922
	strb r0, [r4, #10]	@ 000dd922 a072
.org 0xdd924
	ldr r1, [pc, #28]	@ 000dd924 0749
.org 0xdd926
	adds r0, r4, #0	@ 000dd926 201c
.org 0xdd928
	bl 0x1cf00	@ 000dd928 3ff7eafa
.org 0xdd92c
	adds r0, r4, #0	@ 000dd92c 201c
.org 0xdd92e
	bl 0x1cff0	@ 000dd92e 3ff75ffb
.org 0xdd932
	ldrb r1, [r4, #10]	@ 000dd932 a17a
.org 0xdd934
	movs r2, #16	@ 000dd934 1022
.org 0xdd936
	adds r0, r2, #0	@ 000dd936 101c
.org 0xdd938
	ands r0, r1	@ 000dd938 0840
.org 0xdd93a
	cmp r0, #0	@ 000dd93a 0028
.org 0xdd93c
	beq.n 0xdd948	@ 000dd93c 04d0
.org 0xdd93e
	str r2, [r4, #100]	@ 000dd93e 6266
.org 0xdd940
	b.n 0xdd94e	@ 000dd940 05e0
.org 0xdd942
	.byte 0x00	@ 000dd942 data
.org 0xdd943
	.byte 0x00	@ 000dd943 data
.org 0xdd944
	.byte 0x05,0x8c,0x00,0x00	@ 000dd944 data
.org 0xdd948
	movs r0, #16	@ 000dd948 1020
.org 0xdd94a
	negs r0, r0	@ 000dd94a 4042
.org 0xdd94c
	str r0, [r4, #100]	@ 000dd94c 6066
.org 0xdd94e
	ldr r0, [r4, #100]	@ 000dd94e 606e
.org 0xdd950
	lsls r0, r0, #4	@ 000dd950 0001
.org 0xdd952
	negs r0, r0	@ 000dd952 4042
.org 0xdd954
	str r0, [r4, #92]	@ 000dd954 e065
.org 0xdd956
	ldr r1, [pc, #28]	@ 000dd956 0749
.org 0xdd958
	ldrb r0, [r4, #9]	@ 000dd958 607a
.org 0xdd95a
	lsls r0, r0, #2	@ 000dd95a 8000
.org 0xdd95c
	adds r0, r0, r1	@ 000dd95c 4018
.org 0xdd95e
	movs r1, #1	@ 000dd95e 0121
.org 0xdd960
	str r1, [r4, #12]	@ 000dd960 e160
.org 0xdd962
	ldr r0, [r0, #0]	@ 000dd962 0068
.org 0xdd964
	ldr r0, [r0, #4]	@ 000dd964 4068
.org 0xdd966
	str r0, [r4, #20]	@ 000dd966 6061
.org 0xdd968
	adds r0, r4, #0	@ 000dd968 201c
.org 0xdd96a
	bl 0xdd6c8	@ 000dd96a fff7adfe
