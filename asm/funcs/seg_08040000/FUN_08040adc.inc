@ FUN_08040adc  entry 0x08040adc  size 84
.thumb
.org 0x40adc
FUN_08040adc:
	push {r4, r5, lr}	@ 00040adc 30b5
.org 0x40ade
	adds r1, r0, #0	@ 00040ade 011c
.org 0x40ae0
	ldr r0, [r1, #44]	@ 00040ae0 c86a
.org 0x40ae2
	mov ip, r0	@ 00040ae2 8446
.org 0x40ae4
	mov r4, ip	@ 00040ae4 6446
.org 0x40ae6
	adds r4, #189	@ 00040ae6 bd34
.org 0x40ae8
	ldrb r0, [r4, #0]	@ 00040ae8 2078
.org 0x40aea
	cmp r0, #0	@ 00040aea 0028
.org 0x40aec
	bne.n 0x40b2a	@ 00040aec 1dd1
.org 0x40aee
	ldr r0, [r1, #20]	@ 00040aee 4869
.org 0x40af0
	movs r1, #4	@ 00040af0 0421
.org 0x40af2
	ands r0, r1	@ 00040af2 0840
.org 0x40af4
	cmp r0, #0	@ 00040af4 0028
.org 0x40af6
	beq.n 0x40b2a	@ 00040af6 18d0
.org 0x40af8
	mov r2, ip	@ 00040af8 6246
.org 0x40afa
	ldr r1, [r2, #40]	@ 00040afa 916a
.org 0x40afc
	mov r0, ip	@ 00040afc 6046
.org 0x40afe
	adds r0, #84	@ 00040afe 5430
.org 0x40b00
	ldr r3, [pc, #44]	@ 00040b00 0b4b
.org 0x40b02
	adds r1, r1, r3	@ 00040b02 c918
.org 0x40b04
	ldrb r1, [r1, #0]	@ 00040b04 0978
.org 0x40b06
	ldrb r2, [r2, #10]	@ 00040b06 927a
.org 0x40b08
	lsrs r2, r2, #4	@ 00040b08 1209
.org 0x40b0a
	movs r3, #1	@ 00040b0a 0123
.org 0x40b0c
	ands r2, r3	@ 00040b0c 1a40
.org 0x40b0e
	mov r5, ip	@ 00040b0e 6546
.org 0x40b10
	ldrb r3, [r5, #14]	@ 00040b10 ab7b
.org 0x40b12
	bl 0xe88dc	@ 00040b12 a7f0e3fe
.org 0x40b16
	ldr r2, [pc, #28]	@ 00040b16 074a
.org 0x40b18
	ldrh r1, [r2, #32]	@ 00040b18 118c
.org 0x40b1a
	ldr r0, [pc, #28]	@ 00040b1a 0748
.org 0x40b1c
	cmp r1, r0	@ 00040b1c 8142
.org 0x40b1e
	bhi.n 0x40b24	@ 00040b1e 01d8
.org 0x40b20
	adds r0, r1, #1	@ 00040b20 481c
.org 0x40b22
	strh r0, [r2, #32]	@ 00040b22 1084
.org 0x40b24
	ldrb r0, [r4, #0]	@ 00040b24 2078
.org 0x40b26
	adds r0, #1	@ 00040b26 0130
.org 0x40b28
	strb r0, [r4, #0]	@ 00040b28 2070
.org 0x40b2a
	pop {r4, r5}	@ 00040b2a 30bc
.org 0x40b2c
	pop {r0}	@ 00040b2c 01bc
.org 0x40b2e
	bx r0	@ 00040b2e 0047
