@ FUN_0804e878  entry 0x0804e878  size 40
.thumb
.org 0x4e878
FUN_0804e878:
	push {r4, lr}	@ 0004e878 10b5
.org 0x4e87a
	adds r4, r0, #0	@ 0004e87a 041c
.org 0x4e87c
	adds r0, #189	@ 0004e87c bd30
.org 0x4e87e
	ldrb r0, [r0, #0]	@ 0004e87e 0078
.org 0x4e880
	cmp r0, #0	@ 0004e880 0028
.org 0x4e882
	beq.n 0x4e894	@ 0004e882 07d0
.org 0x4e884
	adds r1, r4, #0	@ 0004e884 211c
.org 0x4e886
	adds r1, #84	@ 0004e886 5431
.org 0x4e888
	movs r0, #1	@ 0004e888 0120
.org 0x4e88a
	bl 0xd0c88	@ 0004e88a 82f0fdf9
.org 0x4e88e
	movs r0, #53	@ 0004e88e 3520
.org 0x4e890
	bl 0x2b10	@ 0004e890 b4f73ef9
.org 0x4e894
	adds r0, r4, #0	@ 0004e894 201c
.org 0x4e896
	bl 0x3a8b4	@ 0004e896 ecf70df8
.org 0x4e89a
	pop {r4}	@ 0004e89a 10bc
.org 0x4e89c
	pop {r0}	@ 0004e89c 01bc
.org 0x4e89e
	bx r0	@ 0004e89e 0047
