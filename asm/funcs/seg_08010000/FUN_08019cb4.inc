@ FUN_08019cb4  entry 0x08019cb4  size 102
.thumb
.org 0x19cb4
FUN_08019cb4:
	push {r4, r5, r6, lr}	@ 00019cb4 70b5
.org 0x19cb6
	ldr r5, [pc, #100]	@ 00019cb6 194d
.org 0x19cb8
	ldr r1, [pc, #100]	@ 00019cb8 1949
.org 0x19cba
	adds r0, r5, r1	@ 00019cba 6818
.org 0x19cbc
	ldrh r1, [r0, #0]	@ 00019cbc 0188
.org 0x19cbe
	lsrs r0, r1, #8	@ 00019cbe 080a
.org 0x19cc0
	cmp r0, #14	@ 00019cc0 0e28
.org 0x19cc2
	bne.n 0x19d14	@ 00019cc2 27d1
.org 0x19cc4
	movs r0, #255	@ 00019cc4 ff20
.org 0x19cc6
	ands r0, r1	@ 00019cc6 0840
.org 0x19cc8
	cmp r0, #6	@ 00019cc8 0628
.org 0x19cca
	bne.n 0x19d14	@ 00019cca 23d1
.org 0x19ccc
	ldr r6, [pc, #84]	@ 00019ccc 154e
.org 0x19cce
	ldr r0, [pc, #88]	@ 00019cce 1648
.org 0x19cd0
	adds r5, r5, r0	@ 00019cd0 2d18
.org 0x19cd2
	ldrb r0, [r5, #0]	@ 00019cd2 2878
.org 0x19cd4
	movs r1, #6	@ 00019cd4 0621
.org 0x19cd6
	bl 0x129120	@ 00019cd6 0ff123fa
.org 0x19cda
	lsls r0, r0, #24	@ 00019cda 0006
.org 0x19cdc
	lsrs r0, r0, #24	@ 00019cdc 000e
.org 0x19cde
	lsls r1, r0, #2	@ 00019cde 8100
.org 0x19ce0
	adds r1, r1, r0	@ 00019ce0 0918
.org 0x19ce2
	lsls r1, r1, #2	@ 00019ce2 8900
.org 0x19ce4
	ldr r4, [pc, #68]	@ 00019ce4 114c
.org 0x19ce6
	adds r1, r1, r4	@ 00019ce6 0919
.org 0x19ce8
	ldr r0, [r6, #0]	@ 00019ce8 3068
.org 0x19cea
	adds r0, r0, r1	@ 00019cea 4018
.org 0x19cec
	movs r1, #128	@ 00019cec 8021
.org 0x19cee
	lsls r1, r1, #7	@ 00019cee c901
.org 0x19cf0
	bl 0x1ea4	@ 00019cf0 e8f7d8f8
.org 0x19cf4
	ldrb r0, [r5, #0]	@ 00019cf4 2878
.org 0x19cf6
	movs r1, #6	@ 00019cf6 0621
.org 0x19cf8
	bl 0x129120	@ 00019cf8 0ff112fa
.org 0x19cfc
	lsls r0, r0, #24	@ 00019cfc 0006
.org 0x19cfe
	lsrs r0, r0, #24	@ 00019cfe 000e
.org 0x19d00
	lsls r1, r0, #2	@ 00019d00 8100
.org 0x19d02
	adds r1, r1, r0	@ 00019d02 0918
.org 0x19d04
	lsls r1, r1, #2	@ 00019d04 8900
.org 0x19d06
	adds r1, r1, r4	@ 00019d06 0919
.org 0x19d08
	ldr r0, [r6, #0]	@ 00019d08 3068
.org 0x19d0a
	adds r0, r0, r1	@ 00019d0a 4018
.org 0x19d0c
	adds r0, #12	@ 00019d0c 0c30
.org 0x19d0e
	movs r1, #0	@ 00019d0e 0021
.org 0x19d10
	bl 0x2208	@ 00019d10 e8f77afa
.org 0x19d14
	pop {r4, r5, r6}	@ 00019d14 70bc
.org 0x19d16
	pop {r0}	@ 00019d16 01bc
.org 0x19d18
	bx r0	@ 00019d18 0047
