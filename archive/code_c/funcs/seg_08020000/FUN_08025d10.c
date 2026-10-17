// undefined FUN_08025d10(void)
// entry 0x8025d10


longlong FUN_08025d10(int param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint in_lr;
  longlong lVar6;
  
  iVar1 = DAT_0802623c;
  iVar4 = DAT_08025d9c;
  pcVar3 = (char *)(param_1 + 0x17c);
  cVar2 = *pcVar3;
  if (cVar2 != '\0') {
    if (cVar2 == '\x02') {
      if (*(byte *)(param_1 + DAT_08025e4c) < 5) {
                    /* WARNING: Could not recover jumptable at 0x08025e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar6 = (**(code **)(PTR_PTR_08025e50 + (uint)*(byte *)(param_1 + DAT_08025e4c) * 4))();
        return lVar6;
      }
    }
    else if (cVar2 == '\x03') {
      FUN_0801f63c(3);
      *pcVar3 = '\x04';
    }
    else if ((((cVar2 == '\x04') &&
              (iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x54), 0xd2000 < iVar4)) &&
             (iVar4 <= DAT_08026234)) &&
            ((iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x58), 0x5a000 < iVar4 &&
             (iVar4 <= DAT_08026238)))) {
      FUN_080275f0(DAT_0802623c,*(undefined4 *)(*(int *)(DAT_08026240 + 0x38) + 0x30));
      *(byte *)(DAT_08026244 + 4) = *(byte *)(DAT_08026244 + 4) | 8;
      *(ushort *)(iVar1 + -8) = (ushort)DAT_08026248 & *(ushort *)(iVar1 + -8);
      *pcVar3 = '\x06';
    }
    goto LAB_08026222;
  }
  *(ushort *)(DAT_08025d9c + 8) = *(ushort *)(DAT_08025d9c + 8) | 1;
  iVar1 = DAT_08025da0;
  *(byte *)(DAT_08025da0 + 4) = *(byte *)(DAT_08025da0 + 4) & 0xf7;
  cVar2 = *(char *)(iVar4 + 2);
  if (cVar2 == '\0') {
    *(byte *)(iVar1 + 0xd) = *(byte *)(iVar1 + 0xd) & 0xc3;
    *(byte *)(DAT_08025da4 + 9) = *(byte *)(DAT_08025da4 + 9) & 0xc3;
    *(undefined2 *)(iVar4 + 10) = 0;
    FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08025da8 + 0x38) + 0x2c));
    FUN_0801f63c(2);
    *(undefined1 *)(iVar4 + 0x188) = 0;
    cVar2 = '\x02';
  }
  else {
    if (cVar2 == '\x02') {
      uVar5 = *(byte *)(iVar4 + 0x188) + 0x4a;
      if (((int)(uint)*(byte *)(((int)uVar5 >> 3) + iVar1 + 4) >> (uVar5 & 7) & 1U) != 0) {
        *(ushort *)(iVar4 + 10) = *(byte *)(iVar4 + 0x188) + 1;
      }
      FUN_080275f0(iVar4 + 0x10,
                   *(undefined4 *)
                    ((uint)*(ushort *)(iVar4 + 10) * 4 + *(int *)(DAT_08025df8 + 0x38) + 8));
      *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xf7;
      *pcVar3 = '\x02';
      goto LAB_08026222;
    }
    if (cVar2 != '\x03') goto LAB_08026222;
    FUN_080275f0(iVar4 + 0x10,
                 *(undefined4 *)
                  ((uint)*(ushort *)(iVar4 + 10) * 4 + *(int *)(DAT_08025e28 + 0x38) + 8));
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xf7;
    cVar2 = '\x04';
  }
  *pcVar3 = cVar2;
LAB_08026222:
  return (ulonglong)in_lr << 0x20;
}


