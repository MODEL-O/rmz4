// undefined FUN_08065f24(void)
// entry 0x8065f24


undefined4 FUN_08065f24(int param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 in_lr;
  byte local_1c [8];
  
  FUN_08129258(local_1c,DAT_08065f58,2);
  pbVar1 = local_1c + 4;
  FUN_08129258(pbVar1,DAT_08065f5c,2);
  if ((*(ushort *)(DAT_08065f60 + 8) & 8) == 0) {
    pbVar5 = (byte *)(param_1 + 0xcd);
    pbVar8 = (byte *)(param_1 + 0xcc);
    if (2 < *pbVar5) {
      iVar6 = 0;
      if (local_1c[0] == *pbVar8) {
        local_1c[4] = 0;
      }
      else {
        do {
          iVar7 = iVar6 + 1;
          if (1 < iVar7) goto LAB_08065f9a;
          iVar3 = iVar6 + 1;
          iVar6 = iVar7;
        } while (local_1c[iVar3] != *pbVar8);
        pbVar1[iVar7] = 0;
      }
    }
LAB_08065f9a:
    iVar6 = FUN_0806635c(pbVar1,2);
    bVar4 = local_1c[iVar6];
    cVar2 = *(char *)((uint)bVar4 + DAT_08065fcc);
    *(char *)(param_1 + 0xd) = cVar2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    if (cVar2 == '\r') {
      *(undefined1 *)(param_1 + 0xe0) = 0;
    }
    if ((uint)bVar4 == (uint)*pbVar8) {
      bVar4 = *pbVar5 + 1;
    }
    else {
      *pbVar8 = bVar4;
      bVar4 = 1;
    }
    *pbVar5 = bVar4;
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


