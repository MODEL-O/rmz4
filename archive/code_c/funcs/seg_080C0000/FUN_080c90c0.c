// undefined FUN_080c90c0(void)
// entry 0x80c90c0


void FUN_080c90c0(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int in_r12;
  int in_lr;
  code *UNRECOVERED_JUMPTABLE;
  
  (*(code *)(in_lr + 0xffe))();
  *(int *)(unaff_r6 + 0x14) = unaff_r4;
  *(int *)(unaff_r4 + 0x54) =
       *(int *)(in_r12 + 0x54) + *(int *)(*(char *)(in_r12 + 0x71) * 4 + DAT_080c913c);
  *(int *)(unaff_r4 + 0x58) =
       *(int *)(in_r12 + 0x58) + *(int *)(*(char *)(in_r12 + 0x71) * 4 + DAT_080c9140);
  if (CONCAT11(*(undefined1 *)(in_r12 + 0x1e),*(undefined1 *)(in_r12 + 0x70)) == DAT_080c9144) {
    *(char *)(unaff_r4 + 0xd) = *(char *)(unaff_r4 + 0xd) + '\x01';
    if ((*(byte *)(unaff_r4 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(in_r12 + 0x54) +
              *(int *)((uint)*(byte *)(*(char *)(in_r12 + 0x71) + DAT_080c91b0) * 4 + DAT_080c91ac);
      iVar4 = DAT_080c91b0;
    }
    else {
      iVar3 = *(int *)(in_r12 + 0x54) -
              *(int *)((uint)*(byte *)(*(char *)(in_r12 + 0x71) + DAT_080c9148) * 4 + DAT_080c913c);
      iVar4 = DAT_080c9148;
    }
    *(int *)(unaff_r4 + 0x54) = iVar3;
    *(int *)(unaff_r4 + 0x58) =
         *(int *)(in_r12 + 0x58) +
         *(int *)((uint)*(byte *)(*(char *)(in_r12 + 0x71) + iVar4) * 4 + DAT_080c91b4);
    if (('\x02' < *(char *)(in_r12 + 0x71)) && (*(char *)(in_r12 + 0x72) < '\x02')) {
      *(undefined4 *)(unaff_r4 + 0x60) = DAT_080c91b8;
      if (*(char *)(in_r12 + 0xdd) == '\0') {
        uVar1 = 0x15;
      }
      else {
        uVar1 = 0x1c;
      }
      *(undefined1 *)(unaff_r4 + 0x12) = uVar1;
      *(char *)(unaff_r4 + 0xd) = *(char *)(unaff_r4 + 0xd) + '\x01';
      *(int *)(unaff_r4 + 0x58) = *(int *)(unaff_r4 + 0x58) + *(int *)(unaff_r4 + 0x60);
      iVar4 = *(int *)(unaff_r4 + 0x60) + 0x40;
      *(int *)(unaff_r4 + 0x60) = iVar4;
      if ((int)((uint)*(byte *)(unaff_r4 + 0x12) * 0x40) < iVar4) {
        *(undefined4 *)(unaff_r4 + 0x60) = DAT_080c91f0;
        uVar2 = DAT_080c9204;
        if ((*(byte *)(in_r12 + 10) & 0x10) != 0) {
          uVar2 = 0x800;
        }
        *(undefined4 *)(unaff_r4 + 0x5c) = uVar2;
        *(undefined4 *)(unaff_r4 + 100) = uVar2;
        *(char *)(unaff_r4 + 0xd) = *(char *)(unaff_r4 + 0xd) + '\x01';
      }
    }
  }
  if ((*(char *)(unaff_r4 + 0xd) != '\0') && (unaff_r5 != 0)) {
    *(undefined4 *)(unaff_r5 + 0x54) = *(undefined4 *)(unaff_r4 + 0x54);
    *(int *)(unaff_r5 + 0x58) = *(int *)(unaff_r4 + 0x58) + 0x1400;
  }
                    /* WARNING: Could not recover jumptable at 0x080c9262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


