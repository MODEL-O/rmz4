@ FUN_080ff1e0  entry 0x080ff1e0  size 56
.thumb
.org 0xff1e0
FUN_080ff1e0:
	push {r2, r3, r4, r7, lr}	@ 000ff1e0 9cb5
.org 0xff1e2
	lsrs r6, r0, #2	@ 000ff1e2 8608
.org 0xff1e4
	blt.n 0xff1c8	@ 000ff1e4 f0db
.org 0xff1e6
	lsls r2, r0, #8	@ 000ff1e6 0202
.org 0xff1e8
	lsls r0, r3, #24	@ 000ff1e8 1806
.org 0xff1ea
	lsrs r4, r0, #24	@ 000ff1ea 040e
.org 0xff1ec
	adds r0, r6, #0	@ 000ff1ec 301c
.org 0xff1ee
	adds r1, r7, #0	@ 000ff1ee 391c
.org 0xff1f0
	movs r2, #0	@ 000ff1f0 0022
.org 0xff1f2
	adds r3, r4, #0	@ 000ff1f2 231c
.org 0xff1f4
	bl 0xd4c8c	@ 000ff1f4 d5f74afd
.org 0xff1f8
	ldrb r1, [r5, #10]	@ 000ff1f8 a97a
.org 0xff1fa
	movs r0, #254	@ 000ff1fa fe20
.org 0xff1fc
	ands r0, r1	@ 000ff1fc 0840
.org 0xff1fe
	strb r0, [r5, #10]	@ 000ff1fe a872
.org 0xff200
	ldr r1, [pc, #20]	@ 000ff200 0549
.org 0xff202
	ldrb r0, [r5, #9]	@ 000ff202 687a
.org 0xff204
	lsls r0, r0, #2	@ 000ff204 8000
.org 0xff206
	adds r0, r0, r1	@ 000ff206 4018
.org 0xff208
	movs r1, #4	@ 000ff208 0421
.org 0xff20a
	str r1, [r5, #12]	@ 000ff20a e960
.org 0xff20c
	ldr r0, [r0, #0]	@ 000ff20c 0068
.org 0xff20e
	ldr r0, [r0, #16]	@ 000ff20e 0069
.org 0xff210
	str r0, [r5, #20]	@ 000ff210 6861
.org 0xff212
	pop {r4, r5, r6, r7}	@ 000ff212 f0bc
.org 0xff214
	pop {r0}	@ 000ff214 01bc
.org 0xff216
	bx r0	@ 000ff216 0047
