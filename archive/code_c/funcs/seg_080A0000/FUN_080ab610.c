// undefined FUN_080ab610(void)
// entry 0x80ab610


undefined4 FUN_080ab610(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  byte local_14 [8];
  
  FUN_08129258(local_14,DAT_080ab64c,2);
  pbVar1 = local_14 + 4;
  FUN_08129258(pbVar1,DAT_080ab650,2);
  if (2 < *(byte *)(param_1 + 0xbb)) {
    iVar5 = 0;
    if (local_14[0] == *(byte *)(param_1 + 0xba)) {
      local_14[4] = 0;
    }
    else {
      do {
        iVar6 = iVar5 + 1;
        if (1 < iVar6) goto LAB_080ab66a;
        iVar3 = iVar5 + 1;
        iVar5 = iVar6;
      } while (local_14[iVar3] != *(byte *)(param_1 + 0xba));
      pbVar1[iVar6] = 0;
    }
  }
LAB_080ab66a:
  iVar5 = FUN_08073e30(pbVar1,2);
  bVar2 = local_14[iVar5];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((uint)bVar2 + DAT_080ab698);
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  if ((uint)bVar2 == (uint)*(byte *)(param_1 + 0xba)) {
    cVar4 = *(char *)(param_1 + 0xbb) + '\x01';
  }
  else {
    *(byte *)(param_1 + 0xba) = bVar2;
    cVar4 = '\x01';
  }
  *(char *)(param_1 + 0xbb) = cVar4;
  return in_lr;
}


