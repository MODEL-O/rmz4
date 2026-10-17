// undefined FUN_080539e8(void)
// entry 0x80539e8


undefined4 FUN_080539e8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  undefined4 in_lr;
  
  iVar2 = DAT_08053a88;
  bVar1 = (byte)*(ushort *)(DAT_08053a0c + 8) & 8;
  if ((*(ushort *)(DAT_08053a0c + 8) & 8) == 0) {
    uVar5 = (uint)*(byte *)(param_1 + 0xb4);
    bVar6 = *(byte *)(param_1 + 0xb5);
    cVar4 = *(char *)(*(int *)(uVar5 * 4 + DAT_08053a88) + (uint)bVar6);
    if (cVar4 == -1) {
      uVar5 = *DAT_08053a8c * DAT_08053a90 + DAT_08053a94;
      *DAT_08053a8c = uVar5 & 0x7fffffff;
      iVar3 = FUN_08129198((uVar5 & 0x7fffffff) >> 0x10,3);
      uVar5 = iVar3 * 0x1000000 + 0x1000000U >> 0x18;
      bVar6 = 0;
      cVar4 = **(char **)(uVar5 * 4 + iVar2);
    }
    *(char *)(param_1 + 0xd) = cVar4;
    *(byte *)(param_1 + 0xe) = bVar1;
    *(byte *)(param_1 + 0xf) = bVar1;
    *(byte *)(param_1 + 0xb4) = (byte)uVar5;
    *(byte *)(param_1 + 0xb5) = bVar6 + 1;
    if ((*(int *)(param_1 + 200) == 0) && (cVar4 == '\x02')) {
      FUN_080539e8(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


