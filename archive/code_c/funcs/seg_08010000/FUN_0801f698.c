// undefined FUN_0801f698(void)
// entry 0x801f698


undefined4 FUN_0801f698(int param_1)

{
  char cVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  psVar2 = DAT_0801f738;
  iVar4 = *(int *)(param_1 + 0x30);
  if (iVar4 != 0) {
    if (*DAT_0801f738 != 0) {
      *(byte *)(DAT_0801f73c + 8) = *(byte *)(DAT_0801f73c + 8) & 0x7f;
      FUN_08002a50();
      *psVar2 = 0;
    }
    iVar3 = DAT_0801f73c;
    if ((((((*(ushort *)(DAT_0801f740 + 8) & 1) != 0) && ((*(byte *)(DAT_0801f740 + 0x12) & 1) == 0)
          ) && ((*(byte *)(DAT_0801f73c + 8) & 0x40) != 0)) &&
        (((*(char *)(iVar4 + 8) == '\x02' && (cVar1 = *(char *)(iVar4 + 9), cVar1 != '\0')) &&
         ((cVar1 != '\x04' && ((cVar1 != '\t' && (cVar1 != '\f')))))))) &&
       ((cVar1 != '\x0e' &&
        ((((cVar1 != '\x15' && (cVar1 != '\x17')) && (cVar1 != '\x18')) &&
         ((*(byte *)(iVar4 + 10) & 4) != 0)))))) {
      *(ushort *)(iVar4 + 0xa4) = (ushort)((int)(*(ushort *)(iVar4 + 0xa4) + 1) >> 1);
      *(byte *)(iVar3 + 8) = *(byte *)(iVar3 + 8) & 0xbf;
      *(byte *)(DAT_0801f744 + 4) = *(byte *)(DAT_0801f744 + 4) & 0xbf;
    }
  }
  return in_lr;
}


