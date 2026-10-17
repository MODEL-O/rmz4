// undefined FUN_080014b0(void)
// entry 0x80014b0


undefined4 FUN_080014b0(ushort *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar1 = *param_1;
  param_1[1] = uVar1;
  if (param_2 == 0) {
    param_1[4] = 1;
    uVar2 = *DAT_08001510;
    *param_1 = ~uVar2;
    param_1[2] = ~uVar2 & ~uVar1;
    param_1[3] = 0;
    uVar4 = 0;
    do {
      uVar6 = (int)(uVar4 * 0x10000) >> 0x10;
      if (((int)(uint)*param_1 >> (uVar6 & 0xff) & 1U) == 0) {
        *(undefined1 *)((int)param_1 + uVar6 + 10) = 0;
      }
      else {
        pcVar5 = (char *)((int)param_1 + uVar6 + 10);
        if (*pcVar5 == '\0') {
          param_1[3] = (ushort)(1 << (uVar6 & 0xff)) | param_1[3];
          if (((int)(uint)param_1[2] >> (uVar6 & 0xff) & 1U) == 0) {
            cVar3 = *(char *)((int)param_1 + 0x15);
          }
          else {
            cVar3 = (char)param_1[10];
          }
          *pcVar5 = cVar3;
        }
        pcVar5 = (char *)((int)param_1 + uVar6 + 10);
        *pcVar5 = *pcVar5 + -1;
      }
      uVar6 = uVar4 * 0x10000 + 0x10000;
      uVar4 = uVar6 >> 0x10;
    } while ((int)uVar6 >> 0x10 < 10);
  }
  else {
    param_1[4] = 0;
  }
  return in_lr;
}


