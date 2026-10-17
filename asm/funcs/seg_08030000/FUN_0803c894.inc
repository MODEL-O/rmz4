@ FUN_0803c894  entry 0x0803c894  size 98
.thumb
.org 0x3c894
FUN_0803c894:
	push {r4, r5, lr}	@ 0003c894 30b5
.org 0x3c896
	sub sp, #8	@ 0003c896 82b0
.org 0x3c898
	adds r5, r0, #0	@ 0003c898 051c
.org 0x3c89a
	bl 0x1cff0	@ 0003c89a e0f7a9fb
.org 0x3c89e
	adds r0, r5, #0	@ 0003c89e 281c
.org 0x3c8a0
	adds r0, #116	@ 0003c8a0 7430
.org 0x3c8a2
	ldr r1, [pc, #84]	@ 0003c8a2 1549
.org 0x3c8a4
	ldrb r2, [r5, #16]	@ 0003c8a4 2a7c
.org 0x3c8a6
	lsls r2, r2, #2	@ 0003c8a6 9200
.org 0x3c8a8
	adds r2, r2, r1	@ 0003c8a8 5218
.org 0x3c8aa
	adds r1, r5, #0	@ 0003c8aa 291c
.org 0x3c8ac
	adds r1, #113	@ 0003c8ac 7131
.org 0x3c8ae
	ldrb r1, [r1, #0]	@ 0003c8ae 0978
.org 0x3c8b0
	lsls r1, r1, #24	@ 0003c8b0 0906
.org 0x3c8b2
	asrs r1, r1, #24	@ 0003c8b2 0916
.org 0x3c8b4
	ldr r2, [r2, #0]	@ 0003c8b4 1268
.org 0x3c8b6
	lsls r1, r1, #2	@ 0003c8b6 8900
.org 0x3c8b8
	adds r1, r1, r2	@ 0003c8b8 8918
.org 0x3c8ba
	ldr r1, [r1, #0]	@ 0003c8ba 0968
.org 0x3c8bc
	adds r4, r5, #0	@ 0003c8bc 2c1c
.org 0x3c8be
	adds r4, #180	@ 0003c8be b434
.org 0x3c8c0
	ldrb r2, [r4, #13]	@ 0003c8c0 627b
.org 0x3c8c2
	ldrb r3, [r4, #12]	@ 0003c8c2 237b
.org 0x3c8c4
	ldrb r4, [r4, #14]	@ 0003c8c4 a47b
.org 0x3c8c6
	str r4, [sp, #0]	@ 0003c8c6 0094
.org 0x3c8c8
	movs r4, #1	@ 0003c8c8 0124
.org 0x3c8ca
	negs r4, r4	@ 0003c8ca 6442
.org 0x3c8cc
	str r4, [sp, #4]	@ 0003c8cc 0194
.org 0x3c8ce
	bl 0x5794	@ 0003c8ce c8f761ff
.org 0x3c8d2
	adds r0, r5, #0	@ 0003c8d2 281c
.org 0x3c8d4
	adds r0, #115	@ 0003c8d4 7330
.org 0x3c8d6
	ldrb r0, [r0, #0]	@ 0003c8d6 0078
.org 0x3c8d8
	cmp r0, #3	@ 0003c8d8 0328
.org 0x3c8da
	bne.n 0x3c8ee	@ 0003c8da 08d1
.org 0x3c8dc
	ldr r1, [pc, #28]	@ 0003c8dc 0749
.org 0x3c8de
	ldrb r0, [r5, #9]	@ 0003c8de 687a
.org 0x3c8e0
	lsls r0, r0, #2	@ 0003c8e0 8000
.org 0x3c8e2
	adds r0, r0, r1	@ 0003c8e2 4018
.org 0x3c8e4
	movs r1, #2	@ 0003c8e4 0221
.org 0x3c8e6
	str r1, [r5, #12]	@ 0003c8e6 e960
.org 0x3c8e8
	ldr r0, [r0, #0]	@ 0003c8e8 0068
.org 0x3c8ea
	ldr r0, [r0, #8]	@ 0003c8ea 8068
.org 0x3c8ec
	str r0, [r5, #20]	@ 0003c8ec 6861
.org 0x3c8ee
	add sp, #8	@ 0003c8ee 02b0
.org 0x3c8f0
	pop {r4, r5}	@ 0003c8f0 30bc
.org 0x3c8f2
	pop {r0}	@ 0003c8f2 01bc
.org 0x3c8f4
	bx r0	@ 0003c8f4 0047
