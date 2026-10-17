// undefined FUN_080790a8(void)
// entry 0x80790a8


undefined4 FUN_080790a8(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 in_lr;
  byte local_20 [8];
  
  FUN_08129258(local_20,DAT_080790e0,4);
  pbVar1 = local_20 + 4;
  FUN_08129258(pbVar1,DAT_080790e4,4);
  if ((*(ushort *)(DAT_080790e8 + 8) & 8) == 0) {
    pbVar4 = (byte *)(param_1 + 0xb5);
    pbVar7 = (byte *)(param_1 + 0xb4);
    if (1 < *pbVar4) {
      iVar5 = 0;
      if (local_20[0] == *pbVar7) {
        local_20[4] = 0;
      }
      else {
        do {
          iVar6 = iVar5 + 1;
          if (3 < iVar6) goto LAB_0807912a;
          iVar3 = iVar5 + 1;
          iVar5 = iVar6;
        } while (local_20[iVar3] != *pbVar7);
        pbVar1[iVar6] = 0;
      }
    }
LAB_0807912a:
    if ((*(byte *)(*DAT_08079110 + 1) < 5) || ((*(byte *)(DAT_0807916c + 4) & 4) != 0)) {
      local_20[7] = 0;
    }
    iVar5 = FUN_080792a0(pbVar1,4);
    bVar2 = local_20[iVar5];
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((uint)bVar2 + DAT_08079170);
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    if ((uint)bVar2 == (uint)*pbVar7) {
      *pbVar4 = *pbVar4 + 1;
    }
    else {
      *pbVar7 = bVar2;
      *pbVar4 = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


