@ FUN_0809eeb4  entry 0x0809eeb4  size 154
.thumb
.org 0x9eeb4
FUN_0809eeb4:
	push {r4, r5, lr}	@ 0009eeb4 30b5
.org 0x9eeb6
	sub sp, #8	@ 0009eeb6 82b0
.org 0x9eeb8
	adds r4, r0, #0	@ 0009eeb8 041c
.org 0x9eeba
	ldrb r5, [r4, #15]	@ 0009eeba e57b
.org 0x9eebc
	cmp r5, #0	@ 0009eebc 002d
.org 0x9eebe
	bne.n 0x9eeea	@ 0009eebe 14d1
.org 0x9eec0
	movs r0, #166	@ 0009eec0 a620
.org 0x9eec2
	bl 0x2b10	@ 0009eec2 63f725fe
.org 0x9eec6
	adds r0, r4, #0	@ 0009eec6 201c
.org 0x9eec8
	adds r0, #140	@ 0009eec8 8c30
.org 0x9eeca
	str r5, [r0, #0]	@ 0009eeca 0560
.org 0x9eecc
	adds r0, #4	@ 0009eecc 0430
.org 0x9eece
	str r5, [r0, #0]	@ 0009eece 0560
.org 0x9eed0
	adds r0, #4	@ 0009eed0 0430
.org 0x9eed2
	strb r5, [r0, #0]	@ 0009eed2 0570
.org 0x9eed4
	ldrb r1, [r4, #10]	@ 0009eed4 a17a
.org 0x9eed6
	movs r0, #251	@ 0009eed6 fb20
.org 0x9eed8
	ands r0, r1	@ 0009eed8 0840
.org 0x9eeda
	movs r1, #254	@ 0009eeda fe21
.org 0x9eedc
	ands r0, r1	@ 0009eedc 0840
.org 0x9eede
	strb r0, [r4, #10]	@ 0009eede a072
.org 0x9eee0
	movs r0, #32	@ 0009eee0 2020
.org 0x9eee2
	strb r0, [r4, #18]	@ 0009eee2 a074
.org 0x9eee4
	ldrb r0, [r4, #15]	@ 0009eee4 e07b
.org 0x9eee6
	adds r0, #1	@ 0009eee6 0130
.org 0x9eee8
	strb r0, [r4, #15]	@ 0009eee8 e073
.org 0x9eeea
	ldrb r1, [r4, #18]	@ 0009eeea a17c
.org 0x9eeec
	movs r0, #3	@ 0009eeec 0320
.org 0x9eeee
	ands r0, r1	@ 0009eeee 0840
.org 0x9eef0
	cmp r0, #0	@ 0009eef0 0028
.org 0x9eef2
	bne.n 0x9ef28	@ 0009eef2 19d1
.org 0x9eef4
	ldrb r0, [r4, #18]	@ 0009eef4 a07c
.org 0x9eef6
	lsls r0, r0, #27	@ 0009eef6 c006
.org 0x9eef8
	ldr r3, [pc, #84]	@ 0009eef8 154b
.org 0x9eefa
	lsrs r1, r0, #24	@ 0009eefa 010e
.org 0x9eefc
	movs r2, #128	@ 0009eefc 8022
.org 0x9eefe
	lsls r2, r2, #23	@ 0009eefe d205
.org 0x9ef00
	adds r0, r0, r2	@ 0009ef00 8018
.org 0x9ef02
	lsrs r0, r0, #23	@ 0009ef02 c00d
.org 0x9ef04
	adds r0, r0, r3	@ 0009ef04 c018
.org 0x9ef06
	movs r5, #0	@ 0009ef06 0025
.org 0x9ef08
	ldrsh r2, [r0, r5]	@ 0009ef08 425f
.org 0x9ef0a
	lsls r2, r2, #3	@ 0009ef0a d200
.org 0x9ef0c
	ldr r0, [r4, #84]	@ 0009ef0c 606d
.org 0x9ef0e
	adds r0, r0, r2	@ 0009ef0e 8018
.org 0x9ef10
	str r0, [sp, #0]	@ 0009ef10 0090
.org 0x9ef12
	lsls r0, r1, #1	@ 0009ef12 4800
.org 0x9ef14
	adds r0, r0, r3	@ 0009ef14 c018
.org 0x9ef16
	movs r3, #0	@ 0009ef16 0023
.org 0x9ef18
	ldrsh r2, [r0, r3]	@ 0009ef18 c25e
.org 0x9ef1a
	lsls r2, r2, #3	@ 0009ef1a d200
.org 0x9ef1c
	ldr r0, [r4, #88]	@ 0009ef1c a06d
.org 0x9ef1e
	adds r0, r0, r2	@ 0009ef1e 8018
.org 0x9ef20
	str r0, [sp, #4]	@ 0009ef20 0190
.org 0x9ef22
	mov r0, sp	@ 0009ef22 6846
.org 0x9ef24
	bl 0xc9a1c	@ 0009ef24 2af07afd
.org 0x9ef28
	ldrb r0, [r4, #18]	@ 0009ef28 a07c
.org 0x9ef2a
	subs r0, #1	@ 0009ef2a 0138
.org 0x9ef2c
	strb r0, [r4, #18]	@ 0009ef2c a074
.org 0x9ef2e
	lsls r0, r0, #24	@ 0009ef2e 0006
.org 0x9ef30
	cmp r0, #0	@ 0009ef30 0028
.org 0x9ef32
	bne.n 0x9ef46	@ 0009ef32 08d1
.org 0x9ef34
	ldr r1, [pc, #28]	@ 0009ef34 0749
.org 0x9ef36
	ldrb r0, [r4, #9]	@ 0009ef36 607a
.org 0x9ef38
	lsls r0, r0, #2	@ 0009ef38 8000
.org 0x9ef3a
	adds r0, r0, r1	@ 0009ef3a 4018
.org 0x9ef3c
	movs r1, #4	@ 0009ef3c 0421
.org 0x9ef3e
	str r1, [r4, #12]	@ 0009ef3e e160
.org 0x9ef40
	ldr r0, [r0, #0]	@ 0009ef40 0068
.org 0x9ef42
	ldr r0, [r0, #16]	@ 0009ef42 0069
.org 0x9ef44
	str r0, [r4, #20]	@ 0009ef44 6061
.org 0x9ef46
	add sp, #8	@ 0009ef46 02b0
.org 0x9ef48
	pop {r4, r5}	@ 0009ef48 30bc
.org 0x9ef4a
	pop {r0}	@ 0009ef4a 01bc
.org 0x9ef4c
	bx r0	@ 0009ef4c 0047
