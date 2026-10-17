// undefined FUN_0805c524(void)
// entry 0x805c524


undefined4 FUN_0805c524(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_24 [3];
  
  local_24[0] = *DAT_0805c598;
  local_24[1] = DAT_0805c598[1];
  local_24[2] = DAT_0805c598[2];
  uVar7 = (uint)*(byte *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x11);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    FUN_08006984(*(undefined2 *)(local_24 + uVar7));
  }
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (bVar2 = (byte)*(ushort *)(DAT_0805c59c + 8) & 8, (*(ushort *)(DAT_0805c59c + 8) & 8) == 0)) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0805c5a0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    if (cVar1 == '\x02') {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    else {
      *(byte *)(param_1 + 0xd) = bVar2;
    }
    *(byte *)(param_1 + 0xe) = bVar2;
    *(byte *)(param_1 + 0xf) = bVar2;
    FUN_0805ea04(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) goto LAB_0805c5fc;
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (uVar7 == 1) {
      uVar4 = 0xd;
      uVar5 = DAT_0805c5ec;
LAB_0805c5f4:
      uVar5 = FUN_0802adac(uVar4,param_1,uVar5);
      *(undefined4 *)(param_1 + 0x2c) = uVar5;
    }
    else if (uVar7 < 2) {
      if (uVar7 == 0) {
        uVar4 = 0xc;
        uVar5 = DAT_0805c5e0;
        goto LAB_0805c5f4;
      }
    }
    else if (uVar7 == 2) {
      uVar4 = 0xe;
      uVar5 = DAT_0805c634;
      goto LAB_0805c5f4;
    }
LAB_0805c5fc:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0805c60e;
  }
  iVar6 = FUN_0802b3e4();
  if (iVar6 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0805c60e:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0805c638));
  *(undefined2 *)(param_1 + 0xca) = *(undefined2 *)(param_1 + 0xa4);
  return in_lr;
}


