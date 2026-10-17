// undefined FUN_081048c8(void)
// entry 0x81048c8


undefined4 FUN_081048c8(int param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar2 = DAT_0810491c;
  iVar6 = *(int *)(param_1 + 0xc0);
  uVar5 = (uint)*(byte *)(param_1 + 0x10);
  if ((*(uint *)(iVar6 + DAT_0810491c + 0x24) & 1 << uVar5) == 0) {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      iVar2 = *(int *)(iVar6 + DAT_0810491c + 0x28);
      if ((iVar2 == 0) || (iVar2 = FUN_08129198(iVar2,10), iVar2 != 0)) {
        FUN_080bc46c(param_1 + 0x54,uVar5 << 8,iVar6 + 0xdf0);
      }
      else {
        FUN_080bc46c(param_1 + 0x54,uVar5 << 8 | 1,iVar6 + 0xdf0);
      }
      iVar2 = DAT_08104964;
      iVar6 = *(int *)(param_1 + 0xc0) + DAT_08104964;
      *(int *)(iVar6 + 0x28) = *(int *)(iVar6 + 0x28) + 1;
      iVar2 = *(int *)(param_1 + 0xc0) + iVar2;
      *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) | 1 << *(sbyte *)(param_1 + 0x10);
      *(char *)(param_1 + 0xb4) = '\x01';
      *(undefined1 *)(param_1 + 0xb5) = 0;
    }
    else if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0xb5) == '\0')) {
      *(undefined1 *)(param_1 + 0x12) = 0x14;
      *(char *)(param_1 + 0xb5) = '\x01';
      *(undefined4 *)(*(int *)(param_1 + 0xc0) + iVar2 + 0x38) = 1;
    }
  }
  iVar2 = DAT_081049d4;
  piVar4 = (int *)(param_1 + 0xc0);
  uVar5 = *(uint *)(*piVar4 + DAT_081049d4 + 0x24);
  if ((uVar5 & 0xff) == 0) {
    *(char *)(param_1 + 0xb4) = (char)uVar5;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*(char *)(param_1 + 0xb6) != '\0') {
      *(char *)(param_1 + 0xb6) = '\0';
    }
  }
  else {
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((bVar1 & 1) != 0) {
      pcVar3 = (char *)(param_1 + 0xb6);
      if (*pcVar3 != '\0') {
        if (*pcVar3 == '\x01') {
          piVar4 = (int *)(*(int *)(*piVar4 + iVar2) + 0x1bc);
          iVar6 = *piVar4;
          iVar2 = 0x200;
        }
        else {
          piVar4 = (int *)(*(int *)(*piVar4 + iVar2) + 0x1bc);
          iVar6 = *piVar4;
          iVar2 = DAT_081049fc;
        }
        *piVar4 = iVar6 + iVar2;
        *pcVar3 = (*pcVar3 - 1U ^ 1) + 1;
      }
    }
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


