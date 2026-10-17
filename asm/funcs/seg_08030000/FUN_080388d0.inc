@ FUN_080388d0  entry 0x080388d0  size 42
.thumb
.org 0x388d0
FUN_080388d0:
	push {lr}	@ 000388d0 00b5
.org 0x388d2
	movs r2, #159	@ 000388d2 9f22
.org 0x388d4
	lsls r2, r2, #1	@ 000388d4 5200
.org 0x388d6
	adds r1, r0, r2	@ 000388d6 8118
.org 0x388d8
	ldrb r0, [r1, #0]	@ 000388d8 0878
.org 0x388da
	cmp r0, #0	@ 000388da 0028
.org 0x388dc
	bne.n 0x388e4	@ 000388dc 02d1
.org 0x388de
	movs r0, #168	@ 000388de a820
.org 0x388e0
	lsls r0, r0, #3	@ 000388e0 c000
.org 0x388e2
	b.n 0x388f6	@ 000388e2 08e0
.org 0x388e4
	ldrb r0, [r1, #0]	@ 000388e4 0878
.org 0x388e6
	movs r1, #128	@ 000388e6 8021
.org 0x388e8
	lsls r1, r1, #1	@ 000388e8 4900
.org 0x388ea
	subs r1, r1, r0	@ 000388ea 091a
.org 0x388ec
	lsls r0, r1, #2	@ 000388ec 8800
.org 0x388ee
	adds r0, r0, r1	@ 000388ee 4018
.org 0x388f0
	lsls r0, r0, #2	@ 000388f0 8000
.org 0x388f2
	adds r0, r0, r1	@ 000388f2 4018
.org 0x388f4
	asrs r0, r0, #2	@ 000388f4 8010
.org 0x388f6
	pop {r1}	@ 000388f6 02bc
.org 0x388f8
	bx r1	@ 000388f8 0847
