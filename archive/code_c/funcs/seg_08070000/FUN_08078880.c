// undefined FUN_08078880(void)
// entry 0x8078880


undefined4 FUN_08078880(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  byte *local_24;
  
  bVar1 = *(byte *)(param_1 + 0xc5);
  uVar3 = bVar1 + 1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08078fdc(param_1,0);
    *(undefined4 *)(param_1 + 100) = 400;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(undefined1 *)(param_1 + 0x13) = 0xff;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_080789b8) * 4 +
                        DAT_080789b4)));
  FUN_08078f28(param_1);
  if (*(int *)(param_1 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  }
  FUN_080025d8(0x84);
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (iVar2 = FUN_08129050(*(undefined4 *)(param_1 + 100),0x30), iVar2 == 0)) {
    FUN_08129258(local_30,DAT_080789bc,3);
    iVar6 = 0;
    iVar7 = (uint)bVar1 * 2;
    iVar2 = *(int *)(param_1 + 0xcc);
    local_24 = (byte *)(iVar2 + 0xb4);
    do {
      uVar4 = (uint)*(byte *)(iVar6 + iVar7 + DAT_080789c0);
      if ((((int)(uint)*local_24 >> uVar4 & 1U) == 0) ||
         (((int)(uint)(*local_24 & *(byte *)(iVar2 + 0xb5)) >> uVar4 & 1U) != 0)) {
        local_30[iVar6] = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    if (*(byte *)(param_1 + 0x13) != 0xff) {
      local_30[*(byte *)(param_1 + 0x13)] = 0;
    }
    iVar2 = FUN_080792a0(local_30,3);
    if (iVar2 == -1) {
      iVar2 = 2;
    }
    if (iVar2 < 2) {
      pbVar5 = (byte *)(*(int *)(param_1 + 0xcc) + 0xbb);
      *pbVar5 = (byte)(1 << *(sbyte *)(iVar2 + iVar7 + DAT_080789c0)) | *pbVar5;
    }
    else {
      local_2c = *(int *)(param_1 + 0x54) + (uVar3 * 2 + -1) * 0x1400;
      local_28 = *(undefined4 *)(param_1 + 0x58);
      FUN_080e8b0c(param_1,&local_2c,0,uVar3);
      *(undefined4 *)(param_1 + 0x68) = 0x10;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x13) = (char)iVar2;
  }
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (iVar2 = *(int *)(param_1 + 0x68) + -1, *(int *)(param_1 + 0x68) = iVar2, iVar2 == 0)) {
    local_2c = *(int *)(param_1 + 0x54) + (uVar3 * 2 + -1) * 0x800;
    local_28 = *(undefined4 *)(param_1 + 0x58);
    FUN_080cd2dc(&local_2c,0);
  }
  if (*(int *)(param_1 + 100) == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


