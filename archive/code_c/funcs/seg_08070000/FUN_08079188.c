// undefined FUN_08079188(void)
// entry 0x8079188


undefined4 FUN_08079188(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  byte local_1c [8];
  
  FUN_08129258(local_1c,DAT_080791b8,4);
  pbVar1 = local_1c + 4;
  FUN_08129258(pbVar1,DAT_080791bc,4);
  if ((*(ushort *)(DAT_080791c0 + 8) & 8) == 0) {
    pbVar5 = (byte *)(param_1 + 0xb7);
    if (1 < *pbVar5) {
      iVar6 = 0;
      if (local_1c[0] == *(byte *)(param_1 + 0xb6)) {
        local_1c[4] = 0;
      }
      else {
        do {
          iVar7 = iVar6 + 1;
          if (3 < iVar7) goto LAB_080791fe;
          iVar3 = iVar6 + 1;
          iVar6 = iVar7;
        } while (local_1c[iVar3] != *(byte *)(param_1 + 0xb6));
        pbVar1[iVar7] = 0;
      }
    }
LAB_080791fe:
    if ((4 < *(byte *)(*DAT_080791e4 + 1)) &&
       (bVar4 = *(byte *)(DAT_0807922c + 4) & 4, (*(byte *)(DAT_0807922c + 4) & 4) == 0)) {
      iVar6 = FUN_080792a0(pbVar1,4);
      bVar2 = local_1c[iVar6];
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((uint)bVar2 + DAT_0807925c);
      *(byte *)(param_1 + 0xe) = bVar4;
      *(byte *)(param_1 + 0xf) = bVar4;
      if ((uint)bVar2 == (uint)*(byte *)(param_1 + 0xb6)) {
        bVar4 = *pbVar5 + 1;
      }
      else {
        *(byte *)(param_1 + 0xb6) = bVar2;
        bVar4 = 1;
      }
      *pbVar5 = bVar4;
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((uint)local_1c[1] + DAT_08079230);
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


