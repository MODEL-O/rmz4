@ FUN_0811f20c  entry 0x0811f20c  size 72
.thumb
.org 0x11f20c
FUN_0811f20c:
	push {r4, r5, r6, lr}	@ 0011f20c 70b5
.org 0x11f20e
	adds r5, r0, #0	@ 0011f20e 051c
.org 0x11f210
	ldr r0, [pc, #64]	@ 0011f210 1048
.org 0x11f212
	adds r1, r5, r0	@ 0011f212 2918
.org 0x11f214
	movs r0, #240	@ 0011f214 f020
.org 0x11f216
	lsls r0, r0, #7	@ 0011f216 c001
.org 0x11f218
	str r0, [r1, #0]	@ 0011f218 0860
.org 0x11f21a
	movs r0, #160	@ 0011f21a a020
.org 0x11f21c
	lsls r0, r0, #7	@ 0011f21c c001
.org 0x11f21e
	str r0, [r1, #4]	@ 0011f21e 4860
.org 0x11f220
	ldr r0, [pc, #52]	@ 0011f220 0d48
.org 0x11f222
	adds r6, r5, r0	@ 0011f222 2e18
.org 0x11f224
	adds r0, r6, #0	@ 0011f224 301c
.org 0x11f226
	movs r2, #0	@ 0011f226 0022
.org 0x11f228
	movs r3, #0	@ 0011f228 0023
.org 0x11f22a
	bl 0x2c0c	@ 0011f22a e3f6effc
.org 0x11f22e
	ldr r0, [pc, #44]	@ 0011f22e 0b48
.org 0x11f230
	adds r4, r5, r0	@ 0011f230 2c18
.org 0x11f232
	adds r0, r4, #0	@ 0011f232 201c
.org 0x11f234
	bl 0x3384	@ 0011f234 e4f6a6f8
.org 0x11f238
	adds r0, r4, #0	@ 0011f238 201c
.org 0x11f23a
	adds r1, r6, #0	@ 0011f23a 311c
.org 0x11f23c
	bl 0x33bc	@ 0011f23c e4f6bef8
.org 0x11f240
	ldr r0, [pc, #28]	@ 0011f240 0748
.org 0x11f242
	adds r5, r5, r0	@ 0011f242 2d18
.org 0x11f244
	ldr r1, [pc, #28]	@ 0011f244 0749
.org 0x11f246
	adds r0, r5, #0	@ 0011f246 281c
.org 0x11f248
	movs r2, #64	@ 0011f248 4022
.org 0x11f24a
	bl 0x10a1b4	@ 0011f24a eaf7b3ff
.org 0x11f24e
	pop {r4, r5, r6}	@ 0011f24e 70bc
.org 0x11f250
	pop {r0}	@ 0011f250 01bc
.org 0x11f252
	bx r0	@ 0011f252 0047
