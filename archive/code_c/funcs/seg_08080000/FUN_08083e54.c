// undefined FUN_08083e54(void)
// entry 0x8083e54


undefined4 FUN_08083e54(int param_1)

{
  short sVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + DAT_08083ea0;
  FUN_080d0c88(2,&local_1c);
  sVar1 = FUN_08007c7c(local_1c,local_18);
  iVar5 = DAT_08083fac;
  if (sVar1 == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_080d4c8c(&local_1c,DAT_08083fac,0,*(byte *)(param_1 + 10) & 0x10);
      uVar4 = 1;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar4 = 0x11;
      }
      FUN_080d4c8c(&local_1c,iVar5,0,uVar4);
      iVar5 = iVar5 + 0x1c;
      FUN_080d4c8c(&local_1c,iVar5,0,*(byte *)(param_1 + 10) & 0x10);
      uVar4 = 1;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar4 = 0x11;
      }
      FUN_080d4c8c(&local_1c,iVar5,0,uVar4);
    }
    else {
      bVar3 = *(byte *)(param_1 + 0xbc);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar3 = bVar3 | 0x10;
      }
      FUN_080d4c8c(&local_1c,DAT_08083ea4,0,bVar3);
      bVar3 = *(byte *)(param_1 + 0xbc);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar3 = bVar3 | 0x10;
      }
      FUN_080d4c8c(&local_1c,DAT_08083ecc,0,bVar3);
      bVar3 = *(byte *)(param_1 + 0xbc);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar3 = bVar3 | 0x10;
      }
      FUN_080d4c8c(&local_1c,DAT_08083ef4,0,bVar3);
      bVar3 = *(byte *)(param_1 + 0xbc);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar3 = bVar3 | 0x10;
      }
      FUN_080d4c8c(&local_1c,DAT_08083f1c,0,bVar3);
    }
  }
  FUN_08002b10(0x2a);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08083fb0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


