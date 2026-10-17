@ FUN_0808549c  entry 0x0808549c  size 84
.thumb
.org 0x8549c
FUN_0808549c:
	push {r4, lr}	@ 0008549c 10b5
.org 0x8549e
	sub sp, #4	@ 0008549e 81b0
.org 0x854a0
	adds r4, r0, #0	@ 000854a0 041c
.org 0x854a2
	mov r2, sp	@ 000854a2 6a46
.org 0x854a4
	mov r1, sp	@ 000854a4 6946
.org 0x854a6
	movs r0, #0	@ 000854a6 0020
.org 0x854a8
	strb r0, [r1, #1]	@ 000854a8 4870
.org 0x854aa
	strb r0, [r2, #0]	@ 000854aa 1070
.org 0x854ac
	ldr r2, [r4, #84]	@ 000854ac 626d
.org 0x854ae
	ldr r0, [r4, #88]	@ 000854ae a06d
.org 0x854b0
	ldr r3, [pc, #60]	@ 000854b0 0f4b
.org 0x854b2
	adds r1, r0, r3	@ 000854b2 c118
.org 0x854b4
	adds r0, r2, #0	@ 000854b4 101c
.org 0x854b6
	bl 0x7f8c	@ 000854b6 82f769fd
.org 0x854ba
	cmp r0, #0	@ 000854ba 0028
.org 0x854bc
	ble.n 0x854c4	@ 000854bc 02dd
.org 0x854be
	mov r1, sp	@ 000854be 6946
.org 0x854c0
	movs r0, #1	@ 000854c0 0120
.org 0x854c2
	strb r0, [r1, #0]	@ 000854c2 0870
.org 0x854c4
	ldr r2, [r4, #84]	@ 000854c4 626d
.org 0x854c6
	ldr r0, [r4, #88]	@ 000854c6 a06d
.org 0x854c8
	movs r3, #128	@ 000854c8 8023
.org 0x854ca
	lsls r3, r3, #1	@ 000854ca 5b00
.org 0x854cc
	adds r1, r0, r3	@ 000854cc c118
.org 0x854ce
	adds r0, r2, #0	@ 000854ce 101c
.org 0x854d0
	bl 0x7db4	@ 000854d0 82f770fc
.org 0x854d4
	cmp r0, #0	@ 000854d4 0028
.org 0x854d6
	bge.n 0x854de	@ 000854d6 02da
.org 0x854d8
	mov r1, sp	@ 000854d8 6946
.org 0x854da
	movs r0, #1	@ 000854da 0120
.org 0x854dc
	strb r0, [r1, #1]	@ 000854dc 4870
.org 0x854de
	mov r0, sp	@ 000854de 6846
.org 0x854e0
	mov r1, sp	@ 000854e0 6946
.org 0x854e2
	ldrb r0, [r0, #0]	@ 000854e2 0078
.org 0x854e4
	ldrb r1, [r1, #1]	@ 000854e4 4978
.org 0x854e6
	ands r0, r1	@ 000854e6 0840
.org 0x854e8
	add sp, #4	@ 000854e8 01b0
.org 0x854ea
	pop {r4}	@ 000854ea 10bc
.org 0x854ec
	pop {r1}	@ 000854ec 02bc
.org 0x854ee
	bx r1	@ 000854ee 0847
