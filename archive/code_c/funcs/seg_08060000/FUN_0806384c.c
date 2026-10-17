// undefined FUN_0806384c(void)
// entry 0x806384c


undefined4 FUN_0806384c(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  uVar7 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x110);
    FUN_080664bc(param_1 + 0x54,1,1);
    FUN_08065a94(param_1,0xb);
    iVar6 = uVar7 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar6 * 0x200;
    *(int *)(param_1 + 100) = iVar6 * 0x10;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6 * 0xa00;
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0x13) = (char)uVar7;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0x13);
  if ((bVar1 & 1) == 0) {
    iVar6 = *(int *)(param_1 + 0xd0);
    iVar5 = 0x2800;
  }
  else {
    iVar6 = *(int *)(param_1 + 0xd0);
    iVar5 = 0xc800;
  }
  FUN_0801cff0(param_1);
  puVar2 = DAT_08063944;
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       DAT_08063944[*(ushort *)((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08063948)]
                       ) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_0806394c))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    FUN_08005784(param_1 + 0x74,*(undefined4 *)*puVar2);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar9 = *(int *)(param_1 + 0x5c);
  iVar8 = *(int *)(param_1 + 100);
  iVar4 = FUN_08128fb8(-iVar9,-iVar8);
  if ((int)(((*(int *)(param_1 + 0x54) + ((iVar9 * 2 + -iVar8 * iVar4) * (iVar4 + 1) >> 1)) -
            (iVar5 + iVar6)) * ((bVar1 & 1) * 2 + -1)) < 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar9;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


