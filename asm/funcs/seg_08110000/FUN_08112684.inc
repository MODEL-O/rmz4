@ FUN_08112684  entry 0x08112684  size 32
.thumb
.org 0x112684
FUN_08112684:
	push {r4, r5, lr}	@ 00112684 30b5
.org 0x112686
	bl 0x1430	@ 00112686 eef6d3fe
.org 0x11268a
	ldr r5, [pc, #24]	@ 0011268a 064d
.org 0x11268c
	ldr r4, [pc, #24]	@ 0011268c 064c
.org 0x11268e
	ldrb r0, [r4, #0]	@ 0011268e 2078
.org 0x112690
	lsls r0, r0, #2	@ 00112690 8000
.org 0x112692
	adds r0, r0, r5	@ 00112692 4019
.org 0x112694
	ldr r1, [r0, #0]	@ 00112694 0168
.org 0x112696
	adds r0, r4, #0	@ 00112696 201c
.org 0x112698
	bl 0x128f80	@ 00112698 16f072fc
.org 0x11269c
	movs r0, #1	@ 0011269c 0120
.org 0x11269e
	bl 0x12ec	@ 0011269e eef625fe
.org 0x1126a2
	b.n 0x11268e	@ 001126a2 f4e7
