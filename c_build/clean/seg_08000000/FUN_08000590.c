// undefined FUN_08000590(void)
// entry 0x8000590


void FUN_08000590(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  iVar5 = DAT_0800067c + ((*(uint *)(param_1 + 0x10) & 0x3fffffff) >> 0x19) * 0x20;
  *(char *)(param_1 + 0x1b) = (char)param_2;
  uVar4 = param_2 * 2;
  if (*(char *)(param_1 + 0x18) != *(char *)(param_1 + 0x19)) {
    uVar4 = param_2 * -2 & 0x1ff;
  }
  uVar3 = uVar4 + 0x80 & 0x1ff;
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar2 = FUN_08128fb8((int)*(short *)(DAT_08000678 + uVar3) << 8,
                         *(ushort *)(param_1 + 0x1c) + 0x16);
    *(undefined2 *)(iVar5 + 6) = uVar2;
    uVar2 = FUN_08128fb8((int)*(short *)(DAT_08000678 + uVar4) << 8,
                         *(ushort *)(param_1 + 0x1c) + 0x16);
    *(undefined2 *)(iVar5 + 0xe) = uVar2;
  }
  else {
    sVar1 = FUN_08128fb8((int)*(short *)(DAT_08000678 + uVar3) << 8,
                         *(ushort *)(param_1 + 0x1c) + 0x16);
    *(short *)(iVar5 + 6) = -sVar1;
    sVar1 = FUN_08128fb8((int)*(short *)(DAT_08000678 + uVar4) << 8,
                         *(ushort *)(param_1 + 0x1c) + 0x16);
    *(short *)(iVar5 + 0xe) = -sVar1;
  }
  if (*(char *)(param_1 + 0x19) == '\0') {
    sVar1 = FUN_08128fb8((int)*(short *)(DAT_08000678 + uVar4) << 8,
                         *(ushort *)(param_1 + 0x1e) + 0x16);
    *(short *)(iVar5 + 0x16) = -sVar1;
    uVar2 = FUN_08128fb8((int)*(short *)(DAT_08000678 + uVar3) << 8,
                         *(ushort *)(param_1 + 0x1e) + 0x16);
    *(undefined2 *)(iVar5 + 0x1e) = uVar2;
  }
  else {
    uVar2 = FUN_08128fb8((int)*(short *)(DAT_08000678 + uVar4) << 8,
                         *(ushort *)(param_1 + 0x1e) + 0x16);
    *(undefined2 *)(iVar5 + 0x16) = uVar2;
    sVar1 = FUN_08128fb8((int)*(short *)(DAT_08000678 + uVar3) << 8,
                         *(ushort *)(param_1 + 0x1e) + 0x16);
    *(short *)(iVar5 + 0x1e) = -sVar1;
  }
  return;
}


