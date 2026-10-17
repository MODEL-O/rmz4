// undefined FUN_080cf6a4(void)
// entry 0x80cf6a4


undefined4 FUN_080cf6a4(int param_1)

{
  sbyte sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sVar1 = *(sbyte *)(param_1 + 0x11);
  iVar5 = *(int *)(iVar4 + 0xb8) + DAT_080cf704;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0x340;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  FUN_0801cff0(param_1);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  if (((int)(uint)*(byte *)(iVar4 + 0xce) >> sVar1 & 1U) == 0) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cf728);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080cf7a8(param_1);
  }
  else if (iVar5 <= iVar3) {
    *(byte *)(iVar4 + 0xcf) = (byte)(1 << sVar1) | *(byte *)(iVar4 + 0xcf);
    *(int *)(param_1 + 0x58) = iVar5;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


