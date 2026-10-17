// undefined FUN_0802abe0(void)
// entry 0x802abe0


undefined4 FUN_0802abe0(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 in_lr;
  
  iVar3 = DAT_0802acd8;
  uVar5 = (uint)*DAT_0802accc;
  uVar7 = (uint)*(byte *)(uVar5 + DAT_0802acd0);
  if (((*(byte *)(DAT_0802acd4 + 0x15) & 1) == 0) &&
     (iVar6 = uVar7 * 0x10, uVar5 == (int)*(short *)(iVar6 + DAT_0802acd8))) {
    puVar10 = (undefined1 *)(iVar6 + 0xe + DAT_0802acd8);
    do {
      if (((((*(ushort *)(DAT_0802acdc + 0x1d0) & 0x7f) == (int)*(short *)(iVar6 + DAT_0802acd8 + 2)
            ) && ((ushort)*(byte *)(param_1 + 9) == *(ushort *)(iVar6 + DAT_0802acd8 + 8))) &&
          ((int)*(char *)(param_1 + 8) == (int)*(short *)(iVar6 + DAT_0802acd8 + 6))) &&
         ((uVar2 = *(ushort *)(iVar6 + DAT_0802acd8 + 10), uVar2 == 0xffff ||
          (*(byte *)(param_1 + 0x10) == uVar2)))) {
        psVar8 = (short *)(iVar6 + DAT_0802acd8 + 4);
        iVar9 = DAT_0802acd4 + 0x18;
        cVar1 = *(char *)(*psVar8 + iVar9);
        if (cVar1 != -1) {
          *(char *)(*psVar8 + iVar9) = cVar1 + '\x01';
        }
        if ((ushort)*(byte *)(*psVar8 + iVar9) != *(ushort *)(iVar6 + iVar3 + 0xc)) {
          return in_lr;
        }
        sVar4 = FUN_0801cc20(*DAT_0802ace0,1,*puVar10,0);
        if (sVar4 == 0) {
          return in_lr;
        }
        *(undefined1 *)(*psVar8 + iVar9) = 0;
        return in_lr;
      }
      puVar10 = puVar10 + 0x10;
      uVar7 = uVar7 + 1;
      iVar6 = uVar7 * 0x10;
    } while (uVar5 == (int)*(short *)(iVar6 + DAT_0802acd8));
  }
  return in_lr;
}


