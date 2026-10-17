@ FUN_08080b88  entry 0x08080b88  size 110
.thumb
.org 0x80b88
FUN_08080b88:
	push {r4, r5, lr}	@ 00080b88 30b5
.org 0x80b8a
	adds r5, r0, #0	@ 00080b8a 051c
.org 0x80b8c
	ldrb r0, [r5, #15]	@ 00080b8c e87b
.org 0x80b8e
	cmp r0, #0	@ 00080b8e 0028
.org 0x80b90
	bne.n 0x80ba0	@ 00080b90 06d1
.org 0x80b92
	ldr r1, [pc, #100]	@ 00080b92 1949
.org 0x80b94
	adds r0, r5, #0	@ 00080b94 281c
.org 0x80b96
	bl 0x1cf00	@ 00080b96 9cf7b3f9
.org 0x80b9a
	ldrb r0, [r5, #15]	@ 00080b9a e87b
.org 0x80b9c
	adds r0, #1	@ 00080b9c 0130
.org 0x80b9e
	strb r0, [r5, #15]	@ 00080b9e e873
.org 0x80ba0
	adds r0, r5, #0	@ 00080ba0 281c
.org 0x80ba2
	bl 0x1cff0	@ 00080ba2 9cf725fa
.org 0x80ba6
	adds r0, r5, #0	@ 00080ba6 281c
.org 0x80ba8
	adds r0, #116	@ 00080ba8 7430
.org 0x80baa
	ldr r4, [pc, #80]	@ 00080baa 144c
.org 0x80bac
	adds r1, r5, #0	@ 00080bac 291c
.org 0x80bae
	adds r1, #181	@ 00080bae b531
.org 0x80bb0
	ldrb r3, [r1, #0]	@ 00080bb0 0b78
.org 0x80bb2
	lsls r3, r3, #2	@ 00080bb2 9b00
.org 0x80bb4
	ldrb r1, [r5, #30]	@ 00080bb4 a97f
.org 0x80bb6
	lsls r1, r1, #8	@ 00080bb6 0902
.org 0x80bb8
	adds r2, r5, #0	@ 00080bb8 2a1c
.org 0x80bba
	adds r2, #112	@ 00080bba 7032
.org 0x80bbc
	ldrb r2, [r2, #0]	@ 00080bbc 1278
.org 0x80bbe
	orrs r1, r2	@ 00080bbe 1143
.org 0x80bc0
	ldr r2, [pc, #60]	@ 00080bc0 0f4a
.org 0x80bc2
	adds r1, r1, r2	@ 00080bc2 8918
.org 0x80bc4
	lsls r1, r1, #3	@ 00080bc4 c900
.org 0x80bc6
	adds r3, r3, r1	@ 00080bc6 5b18
.org 0x80bc8
	adds r3, r3, r4	@ 00080bc8 1b19
.org 0x80bca
	adds r1, r5, #0	@ 00080bca 291c
.org 0x80bcc
	adds r1, #113	@ 00080bcc 7131
.org 0x80bce
	ldrb r1, [r1, #0]	@ 00080bce 0978
.org 0x80bd0
	lsls r1, r1, #24	@ 00080bd0 0906
.org 0x80bd2
	asrs r1, r1, #24	@ 00080bd2 0916
.org 0x80bd4
	ldr r2, [r3, #0]	@ 00080bd4 1a68
.org 0x80bd6
	lsls r1, r1, #2	@ 00080bd6 8900
.org 0x80bd8
	adds r1, r1, r2	@ 00080bd8 8918
.org 0x80bda
	ldr r1, [r1, #0]	@ 00080bda 0968
.org 0x80bdc
	bl 0x5784	@ 00080bdc 84f7d2fd
.org 0x80be0
	adds r0, r5, #0	@ 00080be0 281c
.org 0x80be2
	adds r0, #115	@ 00080be2 7330
.org 0x80be4
	ldrb r1, [r0, #0]	@ 00080be4 0178
.org 0x80be6
	cmp r1, #3	@ 00080be6 0329
.org 0x80be8
	bne.n 0x80bf0	@ 00080be8 02d1
.org 0x80bea
	movs r0, #0	@ 00080bea 0020
.org 0x80bec
	strb r1, [r5, #14]	@ 00080bec a973
.org 0x80bee
	strb r0, [r5, #15]	@ 00080bee e873
.org 0x80bf0
	pop {r4, r5}	@ 00080bf0 30bc
.org 0x80bf2
	pop {r0}	@ 00080bf2 01bc
.org 0x80bf4
	bx r0	@ 00080bf4 0047
