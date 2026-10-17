// undefined FUN_080dd3ec(void)
// entry 0x80dd3ec


undefined4 FUN_080dd3ec(int param_1)

{
  uint *puVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  puVar1 = DAT_080dd424;
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar4 = *DAT_080dd424 * DAT_080dd428 + DAT_080dd42c;
    *DAT_080dd424 = uVar4 & 0x7fffffff;
    uVar4 = (uVar4 & 0x7fffffff) >> 0x10 & 1;
    if (uVar4 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    pbVar6 = (byte *)(param_1 + 0x4a);
    *pbVar6 = *pbVar6 & 0xef | (byte)(uVar4 << 4);
    uVar4 = *puVar1 * DAT_080dd474 + DAT_080dd478;
    *puVar1 = uVar4 & 0x7fffffff;
    uVar4 = (uVar4 & 0x7fffffff) >> 0x10 & 1;
    if (uVar4 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4d) = (char)uVar4;
    *pbVar6 = *pbVar6 & 0xdf | (byte)(uVar4 << 5);
    if (*(char *)(iVar7 + 0xd) != '\x04') {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0xc0;
    sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
    if (sVar3 != 0) {
      piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dd4f8);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
      FUN_080dcdf0(param_1);
    }
  }
  return in_lr;
}


