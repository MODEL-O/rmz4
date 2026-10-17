// undefined FUN_08086b14(void)
// entry 0x8086b14


undefined8 FUN_08086b14(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  ushort auStack_30 [4];
  int local_28;
  int local_24;
  
  FUN_08129258(auStack_30,DAT_08086b7c,6);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x35);
    FUN_08086a14(param_1,0);
    *(undefined1 *)(param_1 + 0xba) = 0;
    *(undefined1 *)(param_1 + 0xbb) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0xc;
    FUN_08005784(param_1 + 0x74,DAT_08086b80);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_08086a48(param_1);
  bVar2 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
  bVar2 = *(byte *)(param_1 + 0x12);
  if ((bVar2 & 1) == 0) {
    pbVar5 = (byte *)(param_1 + 0xba);
    iVar7 = (*pbVar5 + 2) * -0x800;
    iVar3 = iVar7 + 0x800;
    pbVar6 = (byte *)(param_1 + 0xbb);
    iVar7 = iVar7 + 0x1800 + (uint)*pbVar6 * 0x1000;
    local_28 = *(int *)(param_1 + 0x54) + iVar7;
    local_24 = *(int *)(param_1 + 0x58) + iVar3;
    FUN_080d82e4(&local_28,0,0);
    FUN_08086cb4(param_1,&local_28);
    local_28 = *(int *)(param_1 + 0x54) - iVar7;
    local_24 = *(int *)(param_1 + 0x58) - iVar3;
    FUN_080d82e4(&local_28,0,0);
    FUN_08086cb4(param_1,&local_28);
    local_28 = *(int *)(param_1 + 0x54) + iVar3;
    local_24 = *(int *)(param_1 + 0x58) - iVar7;
    FUN_080d82e4(&local_28,0,0);
    FUN_08086cb4(param_1,&local_28);
    local_28 = *(int *)(param_1 + 0x54) - iVar3;
    local_24 = *(int *)(param_1 + 0x58) + iVar7;
    FUN_080d82e4(&local_28,0,0);
    FUN_08086cb4(param_1,&local_28);
    bVar1 = *pbVar6;
    *pbVar6 = bVar1 + 1;
    if (*pbVar5 + 1 <= (uint)(byte)(bVar1 + 1)) {
      *pbVar5 = (byte)(*pbVar5 + 1);
      *pbVar6 = bVar2 & 1;
    }
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar4 = 1;
  }
  else {
    if (((*(char *)(param_1 + 0x12) - 1U & 1) == 0) &&
       (*(byte *)(param_1 + 0xba) + 1 <= *(byte *)(param_1 + 0xbb) + 1)) {
      FUN_08005784(param_1 + 0x74,(uint)auStack_30[*(byte *)(param_1 + 0xba)] * 0x18 + DAT_08086cb0)
      ;
    }
    uVar4 = 0;
  }
  return CONCAT44(in_lr,uVar4);
}


