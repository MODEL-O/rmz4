@ FUN_080cff30  entry 0x080cff30  size 36
.thumb
.org 0xcff30
FUN_080cff30:
	push {r4, lr}	@ 000cff30 10b5
.org 0xcff32
	adds r3, r0, #0	@ 000cff32 031c
.org 0xcff34
	ldr r0, [r3, #40]	@ 000cff34 986a
.org 0xcff36
	adds r1, r0, #0	@ 000cff36 011c
.org 0xcff38
	adds r1, #204	@ 000cff38 cc31
.org 0xcff3a
	ldrh r2, [r1, #0]	@ 000cff3a 0a88
.org 0xcff3c
	movs r4, #0	@ 000cff3c 0024
.org 0xcff3e
	ldrsh r0, [r1, r4]	@ 000cff3e 085f
.org 0xcff40
	cmp r0, #0	@ 000cff40 0028
.org 0xcff42
	beq.n 0xcff48	@ 000cff42 01d0
.org 0xcff44
	subs r0, r2, #1	@ 000cff44 501e
.org 0xcff46
	strh r0, [r1, #0]	@ 000cff46 0880
.org 0xcff48
	adds r0, r3, #0	@ 000cff48 181c
.org 0xcff4a
	bl 0xbd3f8	@ 000cff4a edf755fa
.org 0xcff4e
	pop {r4}	@ 000cff4e 10bc
.org 0xcff50
	pop {r0}	@ 000cff50 01bc
.org 0xcff52
	bx r0	@ 000cff52 0047
