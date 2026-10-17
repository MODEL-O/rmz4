@ FUN_0805380c  entry 0x0805380c  size 68
.thumb
.org 0x5380c
FUN_0805380c:
	push {r4, lr}	@ 0005380c 10b5
.org 0x5380e
	adds r4, r0, #0	@ 0005380e 041c
.org 0x53810
	ldrb r0, [r4, #15]	@ 00053810 e07b
.org 0x53812
	cmp r0, #0	@ 00053812 0028
.org 0x53814
	bne.n 0x53832	@ 00053814 0dd1
.org 0x53816
	adds r0, r4, #0	@ 00053816 201c
.org 0x53818
	adds r0, #192	@ 00053818 c030
.org 0x5381a
	ldr r0, [r0, #0]	@ 0005381a 0068
.org 0x5381c
	adds r0, #180	@ 0005381c b430
.org 0x5381e
	movs r1, #1	@ 0005381e 0121
.org 0x53820
	strb r1, [r0, #0]	@ 00053820 0170
.org 0x53822
	movs r1, #182	@ 00053822 b621
.org 0x53824
	lsls r1, r1, #8	@ 00053824 0902
.org 0x53826
	adds r0, r4, #0	@ 00053826 201c
.org 0x53828
	bl 0x1cf00	@ 00053828 c9f76afb
.org 0x5382c
	ldrb r0, [r4, #15]	@ 0005382c e07b
.org 0x5382e
	adds r0, #1	@ 0005382e 0130
.org 0x53830
	strb r0, [r4, #15]	@ 00053830 e073
.org 0x53832
	adds r0, r4, #0	@ 00053832 201c
.org 0x53834
	bl 0x1cff0	@ 00053834 c9f7dcfb
.org 0x53838
	adds r0, r4, #0	@ 00053838 201c
.org 0x5383a
	adds r0, #192	@ 0005383a c030
.org 0x5383c
	ldr r0, [r0, #0]	@ 0005383c 0068
.org 0x5383e
	ldrb r1, [r0, #13]	@ 0005383e 417b
.org 0x53840
	cmp r1, #2	@ 00053840 0229
.org 0x53842
	bne.n 0x5384a	@ 00053842 02d1
.org 0x53844
	movs r0, #0	@ 00053844 0020
.org 0x53846
	strb r1, [r4, #14]	@ 00053846 a173
.org 0x53848
	strb r0, [r4, #15]	@ 00053848 e073
.org 0x5384a
	pop {r4}	@ 0005384a 10bc
.org 0x5384c
	pop {r0}	@ 0005384c 01bc
.org 0x5384e
	bx r0	@ 0005384e 0047
