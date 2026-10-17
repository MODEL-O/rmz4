@ FUN_0808b1dc  entry 0x0808b1dc  size 52
.thumb
.org 0x8b1dc
FUN_0808b1dc:
	push {r4, r5, lr}	@ 0008b1dc 30b5
.org 0x8b1de
	adds r4, r0, #0	@ 0008b1de 041c
.org 0x8b1e0
	adds r0, #193	@ 0008b1e0 c130
.org 0x8b1e2
	ldrb r5, [r0, #0]	@ 0008b1e2 0578
.org 0x8b1e4
	cmp r5, #0	@ 0008b1e4 002d
.org 0x8b1e6
	bne.n 0x8b208	@ 0008b1e6 0fd1
.org 0x8b1e8
	ldr r0, [r4, #84]	@ 0008b1e8 606d
.org 0x8b1ea
	ldr r1, [r4, #88]	@ 0008b1ea a16d
.org 0x8b1ec
	bl 0x8748	@ 0008b1ec 7df7acfa
.org 0x8b1f0
	adds r2, r0, #0	@ 0008b1f0 021c
.org 0x8b1f2
	ldr r0, [r4, #88]	@ 0008b1f2 a06d
.org 0x8b1f4
	subs r0, r2, r0	@ 0008b1f4 101a
.org 0x8b1f6
	movs r1, #136	@ 0008b1f6 8821
.org 0x8b1f8
	lsls r1, r1, #3	@ 0008b1f8 c900
.org 0x8b1fa
	cmp r0, r1	@ 0008b1fa 8842
.org 0x8b1fc
	ble.n 0x8b208	@ 0008b1fc 04dd
.org 0x8b1fe
	str r2, [r4, #88]	@ 0008b1fe a265
.org 0x8b200
	ldr r0, [r4, #96]	@ 0008b200 206e
.org 0x8b202
	cmp r0, #64	@ 0008b202 4028
.org 0x8b204
	ble.n 0x8b208	@ 0008b204 00dd
.org 0x8b206
	str r5, [r4, #96]	@ 0008b206 2566
.org 0x8b208
	movs r0, #0	@ 0008b208 0020
.org 0x8b20a
	pop {r4, r5}	@ 0008b20a 30bc
.org 0x8b20c
	pop {r1}	@ 0008b20c 02bc
.org 0x8b20e
	bx r1	@ 0008b20e 0847
