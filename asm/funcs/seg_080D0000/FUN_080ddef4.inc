@ FUN_080ddef4  entry 0x080ddef4  size 100
.thumb
.org 0xddef4
FUN_080ddef4:
	push {r4, r5, r6, lr}	@ 000ddef4 70b5
.org 0xddef6
	sub sp, #8	@ 000ddef6 82b0
.org 0xddef8
	adds r5, r0, #0	@ 000ddef8 051c
.org 0xddefa
	ldr r0, [r5, #84]	@ 000ddefa 686d
.org 0xddefc
	str r0, [sp, #0]	@ 000ddefc 0090
.org 0xddefe
	ldr r0, [r5, #88]	@ 000ddefe a86d
.org 0xddf00
	str r0, [sp, #4]	@ 000ddf00 0190
.org 0xddf02
	ldr r6, [pc, #84]	@ 000ddf02 154e
.org 0xddf04
	ldrb r0, [r5, #10]	@ 000ddf04 a87a
.org 0xddf06
	movs r4, #16	@ 000ddf06 1024
.org 0xddf08
	adds r3, r4, #0	@ 000ddf08 231c
.org 0xddf0a
	ands r3, r0	@ 000ddf0a 0340
.org 0xddf0c
	lsls r3, r3, #24	@ 000ddf0c 1b06
.org 0xddf0e
	lsrs r3, r3, #24	@ 000ddf0e 1b0e
.org 0xddf10
	mov r0, sp	@ 000ddf10 6846
.org 0xddf12
	adds r1, r6, #0	@ 000ddf12 311c
.org 0xddf14
	movs r2, #0	@ 000ddf14 0022
.org 0xddf16
	bl 0xd4c8c	@ 000ddf16 f6f7b9fe
.org 0xddf1a
	adds r6, #28	@ 000ddf1a 1c36
.org 0xddf1c
	ldrb r0, [r5, #10]	@ 000ddf1c a87a
.org 0xddf1e
	ands r4, r0	@ 000ddf1e 0440
.org 0xddf20
	lsls r4, r4, #24	@ 000ddf20 2406
.org 0xddf22
	lsrs r4, r4, #24	@ 000ddf22 240e
.org 0xddf24
	mov r0, sp	@ 000ddf24 6846
.org 0xddf26
	adds r1, r6, #0	@ 000ddf26 311c
.org 0xddf28
	movs r2, #0	@ 000ddf28 0022
.org 0xddf2a
	adds r3, r4, #0	@ 000ddf2a 231c
.org 0xddf2c
	bl 0xd4c8c	@ 000ddf2c f6f7aefe
.org 0xddf30
	movs r0, #1	@ 000ddf30 0120
.org 0xddf32
	mov r1, sp	@ 000ddf32 6946
.org 0xddf34
	bl 0xd0c88	@ 000ddf34 f2f7a8fe
.org 0xddf38
	movs r0, #42	@ 000ddf38 2a20
.org 0xddf3a
	bl 0x2b10	@ 000ddf3a 24f7e9fd
.org 0xddf3e
	ldr r1, [pc, #28]	@ 000ddf3e 0749
.org 0xddf40
	ldrb r0, [r5, #9]	@ 000ddf40 687a
.org 0xddf42
	lsls r0, r0, #2	@ 000ddf42 8000
.org 0xddf44
	adds r0, r0, r1	@ 000ddf44 4018
.org 0xddf46
	movs r1, #4	@ 000ddf46 0421
.org 0xddf48
	str r1, [r5, #12]	@ 000ddf48 e960
.org 0xddf4a
	ldr r0, [r0, #0]	@ 000ddf4a 0068
.org 0xddf4c
	ldr r0, [r0, #16]	@ 000ddf4c 0069
.org 0xddf4e
	str r0, [r5, #20]	@ 000ddf4e 6861
.org 0xddf50
	add sp, #8	@ 000ddf50 02b0
.org 0xddf52
	pop {r4, r5, r6}	@ 000ddf52 70bc
.org 0xddf54
	pop {r0}	@ 000ddf54 01bc
.org 0xddf56
	bx r0	@ 000ddf56 0047
