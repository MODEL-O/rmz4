// undefined FUN_080ffbec(void)
// entry 0x80ffbec


undefined4 FUN_080ffbec(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(byte *)(DAT_080ffd54 + DAT_080ffd58) =
             (byte)(1 << *(sbyte *)(param_1 + 0x10)) | *(byte *)(DAT_080ffd54 + DAT_080ffd58);
        FUN_08002b10(0x186);
        local_c = *(undefined4 *)(param_1 + 0x58);
        local_10 = *(int *)(param_1 + 0x54) + DAT_080ffd5c;
        FUN_08092c7c(&local_10,1,*(char *)(param_1 + 0x10) * '\x03');
        local_10 = *(int *)(param_1 + 0x54);
        local_c = *(undefined4 *)(param_1 + 0x58);
        FUN_08092c7c(&local_10,1,*(char *)(param_1 + 0x10) * '\x03' + '\x01');
        local_c = *(undefined4 *)(param_1 + 0x58);
        local_10 = *(int *)(param_1 + 0x54) + 0x1800;
        FUN_08092c7c(&local_10,1,*(char *)(param_1 + 0x10) * '\x03' + '\x02');
        *(undefined4 *)(param_1 + 0x60) = 0x180;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      iVar2 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar2;
      iVar5 = *(int *)(param_1 + 0xb4);
      if (iVar5 <= iVar2) {
        return in_lr;
      }
      *(byte *)(DAT_080ffd54 + DAT_080ffd60) =
           (byte)(1 << *(sbyte *)(param_1 + 0x10)) | *(byte *)(DAT_080ffd54 + DAT_080ffd60);
      *(int *)(param_1 + 0x58) = iVar5;
      *(undefined1 *)(param_1 + 0xd) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar2 = *(int *)(param_1 + 0x58);
      iVar5 = 0x6000;
    }
    else if (*(char *)(param_1 + 0x10) == '\x01') {
      iVar2 = *(int *)(param_1 + 0x58);
      iVar5 = 0x5000;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x58);
      iVar5 = 0x4000;
    }
    *(int *)(param_1 + 0x58) = iVar2 + iVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar3 = FUN_0801fb14(DAT_080ffc60,param_1 + 0x54);
  if (uVar3 < 0xf001) {
    iVar2 = *(int *)(*DAT_080ffc80 + 0x54) - *(int *)(param_1 + 0x54);
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 0x54) - *(int *)(*DAT_080ffc80 + 0x54);
    }
    if (0x6000 < iVar2) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ffc64);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  }
  return in_lr;
}


