// undefined FUN_0807464c(void)
// entry 0x807464c


undefined4 FUN_0807464c(int param_1)

{
  char cVar1;
  uint *puVar2;
  undefined1 uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  FUN_0801cff0();
  pbVar5 = (byte *)(param_1 + 0xe0);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + *(short *)((uint)*pbVar5 * 2 + DAT_080746b4) * 4;
  *pbVar5 = *pbVar5 + 1;
  *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 200) + *(short *)(param_1 + 0xc4);
  *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xca) + *(short *)(param_1 + 0xc6);
  puVar2 = DAT_080746bc;
  if ((*(ushort *)(DAT_080746b8 + 8) & 8) == 0) {
    do {
      uVar4 = *puVar2 * DAT_080746c0 + DAT_080746c4;
      *puVar2 = uVar4 & 0x7fffffff;
      if (((uVar4 & 0x7fffffff) >> 0x10 & 1) == 0) {
        uVar3 = 4;
      }
      else {
        uVar3 = 5;
      }
      *(undefined1 *)(param_1 + 0xd) = uVar3;
      cVar1 = *(char *)(param_1 + 0xde);
    } while ((cVar1 == *(char *)(param_1 + 0xd)) && (*(char *)(param_1 + 0xdf) == cVar1));
    *(char *)(param_1 + 0xdf) = cVar1;
    *(char *)(param_1 + 0xde) = *(char *)(param_1 + 0xd);
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


