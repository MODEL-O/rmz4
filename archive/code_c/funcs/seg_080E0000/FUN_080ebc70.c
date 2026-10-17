// undefined FUN_080ebc70(void)
// entry 0x80ebc70


undefined4 FUN_080ebc70(int param_1)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  byte *pbVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + DAT_080ebcc4;
  FUN_080d0c88(1,&local_1c);
  sVar2 = FUN_08007c7c(local_1c,local_18);
  iVar1 = DAT_080ebe10;
  if (sVar2 == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_080d4c8c(&local_1c,DAT_080ebe10,0,*(byte *)(param_1 + 10) & 0x10);
      uVar6 = 1;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar6 = 0x11;
      }
      FUN_080d4c8c(&local_1c,iVar1,0,uVar6);
      FUN_080d4c8c(&local_1c,iVar1 + 0x1c,0,*(byte *)(param_1 + 10) & 0x10);
      uVar6 = 1;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar6 = 0x11;
      }
      FUN_080d4c8c(&local_1c,iVar1 + 0x1c,0,uVar6);
      FUN_080d4c8c(&local_1c,iVar1 + 0x70,0,*(byte *)(param_1 + 10) & 0x10);
    }
    else {
      pbVar4 = (byte *)(param_1 + 0xbc);
      bVar5 = *pbVar4;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar5 = bVar5 | 0x10;
      }
      FUN_080d4c8c(&local_1c,DAT_080ebcc8,0,bVar5);
      bVar5 = *pbVar4;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar5 = bVar5 | 0x10;
      }
      FUN_080d4c8c(&local_1c,DAT_080ebcf0,0,bVar5);
      bVar5 = *pbVar4;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar5 = bVar5 | 0x10;
      }
      FUN_080d4c8c(&local_1c,DAT_080ebd18,0,bVar5);
      bVar5 = *pbVar4;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar5 = bVar5 | 0x10;
      }
      FUN_080d4c8c(&local_1c,DAT_080ebd40,0,bVar5);
      bVar5 = *pbVar4;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar5 = bVar5 | 0x10;
      }
      FUN_080d4c8c(&local_1c,DAT_080ebd68,0,bVar5);
    }
  }
  FUN_08002b10(0x2a);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ebe14);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  return in_lr;
}


