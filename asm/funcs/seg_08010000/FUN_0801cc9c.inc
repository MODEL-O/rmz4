@ FUN_0801cc9c  entry 0x0801cc9c  size 130
.thumb
.org 0x1cc9c
FUN_0801cc9c:
	push {r4, r5, lr}	@ 0001cc9c 30b5
.org 0x1cc9e
	adds r5, r0, #0	@ 0001cc9e 051c
.org 0x1cca0
	adds r4, r5, #0	@ 0001cca0 2c1c
.org 0x1cca2
	adds r4, #52	@ 0001cca2 3434
.org 0x1cca4
	adds r0, #108	@ 0001cca4 6c30
.org 0x1cca6
	ldr r1, [pc, #120]	@ 0001cca6 1e49
.org 0x1cca8
	ldr r1, [r1, #0]	@ 0001cca8 0968
.org 0x1ccaa
	bl 0x34a4	@ 0001ccaa e6f7fbfb
.org 0x1ccae
	ldr r0, [pc, #116]	@ 0001ccae 1d48
.org 0x1ccb0
	ldr r1, [r0, #0]	@ 0001ccb0 0168
.org 0x1ccb2
	adds r2, r5, #0	@ 0001ccb2 2a1c
.org 0x1ccb4
	adds r2, #84	@ 0001ccb4 5432
.org 0x1ccb6
	adds r0, r4, #0	@ 0001ccb6 201c
.org 0x1ccb8
	bl 0x2cb8	@ 0001ccb8 e5f7feff
.org 0x1ccbc
	ldrb r0, [r5, #10]	@ 0001ccbc a87a
.org 0x1ccbe
	lsrs r0, r0, #4	@ 0001ccbe 0009
.org 0x1ccc0
	movs r3, #1	@ 0001ccc0 0123
.org 0x1ccc2
	ands r0, r3	@ 0001ccc2 1840
.org 0x1ccc4
	strb r0, [r4, #24]	@ 0001ccc4 2076
.org 0x1ccc6
	ldrb r0, [r5, #10]	@ 0001ccc6 a87a
.org 0x1ccc8
	lsrs r0, r0, #4	@ 0001ccc8 0009
.org 0x1ccca
	ands r0, r3	@ 0001ccca 1840
.org 0x1cccc
	lsls r0, r0, #4	@ 0001cccc 0001
.org 0x1ccce
	ldrb r2, [r4, #22]	@ 0001ccce a27d
.org 0x1ccd0
	movs r1, #17	@ 0001ccd0 1121
.org 0x1ccd2
	negs r1, r1	@ 0001ccd2 4942
.org 0x1ccd4
	ands r1, r2	@ 0001ccd4 1140
.org 0x1ccd6
	orrs r1, r0	@ 0001ccd6 0143
.org 0x1ccd8
	strb r1, [r4, #22]	@ 0001ccd8 a175
.org 0x1ccda
	ldrb r0, [r5, #10]	@ 0001ccda a87a
.org 0x1ccdc
	lsrs r0, r0, #5	@ 0001ccdc 4009
.org 0x1ccde
	ands r0, r3	@ 0001ccde 1840
.org 0x1cce0
	strb r0, [r4, #25]	@ 0001cce0 6076
.org 0x1cce2
	ldrb r0, [r5, #10]	@ 0001cce2 a87a
.org 0x1cce4
	lsrs r0, r0, #5	@ 0001cce4 4009
.org 0x1cce6
	ands r0, r3	@ 0001cce6 1840
.org 0x1cce8
	lsls r0, r0, #5	@ 0001cce8 4001
.org 0x1ccea
	movs r2, #33	@ 0001ccea 2122
.org 0x1ccec
	negs r2, r2	@ 0001ccec 5242
.org 0x1ccee
	ands r1, r2	@ 0001ccee 1140
.org 0x1ccf0
	orrs r1, r0	@ 0001ccf0 0143
.org 0x1ccf2
	strb r1, [r4, #22]	@ 0001ccf2 a175
.org 0x1ccf4
	movs r0, #255	@ 0001ccf4 ff20
.org 0x1ccf6
	strb r0, [r5, #30]	@ 0001ccf6 a877
.org 0x1ccf8
	ldrb r1, [r5, #10]	@ 0001ccf8 a97a
.org 0x1ccfa
	movs r0, #8	@ 0001ccfa 0820
.org 0x1ccfc
	orrs r0, r1	@ 0001ccfc 0843
.org 0x1ccfe
	movs r1, #191	@ 0001ccfe bf21
.org 0x1cd00
	ands r0, r1	@ 0001cd00 0840
.org 0x1cd02
	strb r0, [r5, #10]	@ 0001cd02 a872
.org 0x1cd04
	ldrb r1, [r5, #11]	@ 0001cd04 e97a
.org 0x1cd06
	movs r0, #254	@ 0001cd06 fe20
.org 0x1cd08
	ands r0, r1	@ 0001cd08 0840
.org 0x1cd0a
	movs r1, #253	@ 0001cd0a fd21
.org 0x1cd0c
	ands r0, r1	@ 0001cd0c 0840
.org 0x1cd0e
	movs r1, #251	@ 0001cd0e fb21
.org 0x1cd10
	ands r0, r1	@ 0001cd10 0840
.org 0x1cd12
	movs r1, #223	@ 0001cd12 df21
.org 0x1cd14
	ands r0, r1	@ 0001cd14 0840
.org 0x1cd16
	strb r0, [r5, #11]	@ 0001cd16 e872
.org 0x1cd18
	pop {r4, r5}	@ 0001cd18 30bc
.org 0x1cd1a
	pop {r0}	@ 0001cd1a 01bc
.org 0x1cd1c
	bx r0	@ 0001cd1c 0047
