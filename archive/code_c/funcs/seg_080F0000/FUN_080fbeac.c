// undefined FUN_080fbeac(void)
// entry 0x80fbeac


undefined4 FUN_080fbeac(int param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    iVar1 = DAT_080fc064;
    uVar4 = *(uint *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080fc064);
    pbVar5 = (byte *)((uVar4 >> 3) + DAT_080fc060 + 4);
    *pbVar5 = (byte)(1 << (uVar4 & 7)) | *pbVar5;
    uVar4 = *(uint *)((uint)*(byte *)(param_1 + 0x10) * 4 + iVar1);
    pbVar5 = (byte *)((uVar4 >> 3) + DAT_080fc068);
    *pbVar5 = (byte)(1 << (uVar4 & 7)) | *pbVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = DAT_080fc06c;
  iVar6 = param_1 + 0x54;
  FUN_080d4c8c(iVar6,DAT_080fc06c,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(iVar6,iVar1 + 0x1c,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(iVar6,iVar1 + 0x38,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(iVar6,iVar1 + 0x54,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(iVar6,iVar1 + 0x70,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(iVar6,iVar1 + 0x8c,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(iVar6,iVar1 + 0xa8,0,*(byte *)(param_1 + 10) & 0x10);
  iVar6 = DAT_080fc078;
  iVar1 = DAT_080fc074;
  puVar2 = DAT_080fc070;
  uVar4 = *DAT_080fc070 * DAT_080fc074 + DAT_080fc078;
  *DAT_080fc070 = uVar4 & 0x7fffffff;
  local_24 = *(int *)(param_1 + 0x54) + (8 - ((uVar4 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
  local_20 = *(undefined4 *)(param_1 + 0x58);
  FUN_080d0c88(1,&local_24);
  uVar4 = *puVar2 * iVar1 + iVar6;
  *puVar2 = uVar4 & 0x7fffffff;
  local_24 = *(int *)(param_1 + 0x54) + (8 - ((uVar4 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
  local_20 = *(int *)(param_1 + 0x58) + DAT_080fc07c;
  FUN_080d0c88(1,&local_24);
  uVar4 = *puVar2 * iVar1 + iVar6;
  *puVar2 = uVar4 & 0x7fffffff;
  local_24 = *(int *)(param_1 + 0x54) + (8 - ((uVar4 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
  local_20 = *(int *)(param_1 + 0x58) + DAT_080fc080;
  FUN_080d0c88(1,&local_24);
  FUN_08002b10(0xa6);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fc084);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  return in_lr;
}


