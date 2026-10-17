// undefined FUN_080271d8(void)
// entry 0x80271d8


longlong FUN_080271d8(ushort *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_lr;
  
  iVar3 = DAT_08027360;
  iVar2 = DAT_08027220;
  if ((char)param_1[0xbe] == '\0') {
    *(ushort *)(DAT_08027220 + 8) = *(ushort *)(DAT_08027220 + 8) | 1;
    iVar3 = DAT_08027224;
    *(byte *)(DAT_08027224 + 4) = *(byte *)(DAT_08027224 + 4) | 8;
    *(byte *)(iVar3 + 0xc) = *(byte *)(iVar3 + 0xc) & 0xe3;
    cVar1 = *(char *)(iVar2 + 2);
    if (cVar1 == '\0') {
      uVar4 = **(undefined4 **)(DAT_08027228 + 0x44);
    }
    else if (cVar1 == '\x01') {
      uVar4 = *(undefined4 *)(*(int *)(DAT_0802723c + 0x44) + 4);
    }
    else if (cVar1 == '\x02') {
      uVar4 = *(undefined4 *)(*(int *)(DAT_08027250 + 0x44) + 8);
    }
    else if (cVar1 == '\x03') {
      uVar4 = *(undefined4 *)(*(int *)((uint)*param_1 * 4 + DAT_0802726c) + 0xc);
    }
    else if (cVar1 == '\x04') {
      uVar4 = *(undefined4 *)(*(int *)((uint)*param_1 * 4 + DAT_08027288) + 0x10);
    }
    else if (cVar1 == '\x05') {
      uVar4 = *(undefined4 *)(*(int *)((uint)*param_1 * 4 + DAT_080272a4) + 0x14);
    }
    else if (cVar1 == '\x06') {
      uVar4 = *(undefined4 *)(*(int *)((uint)*param_1 * 4 + DAT_080272c0) + 0x18);
    }
    else if (cVar1 == '\a') {
      uVar4 = *(undefined4 *)(*(int *)((uint)*param_1 * 4 + DAT_080272dc) + 0x1c);
    }
    else {
      if (cVar1 != '\b') {
        if (*(char *)(iVar2 + 2) == '\t') {
          FUN_080275f0(iVar2 + 0x10,
                       *(undefined4 *)(*(int *)((uint)*param_1 * 4 + DAT_0802732c) + 0x3c));
          *(undefined1 *)(param_1 + 0xbe) = 0xff;
        }
        goto LAB_080273e6;
      }
      uVar4 = *(undefined4 *)(*(int *)((uint)*param_1 * 4 + DAT_08027300) + 0x38);
    }
    FUN_080275f0(iVar2 + 0x10,uVar4);
    *(char *)(param_1 + 0xbe) = -1;
  }
  else if ((*(byte *)(DAT_08027360 + 6) & 8) == 0) {
    if (DAT_08027370 < (uint)(*(int *)(*(int *)(DAT_08027364 + DAT_08027368) + 0x54) + DAT_0802736c)
       ) {
      *(undefined4 *)(DAT_0802738c + DAT_08027390) = 0x3c0000;
    }
    else {
      *(undefined4 *)(DAT_08027374 + DAT_08027378) = 0x57000;
    }
  }
  else if (((*(byte *)(DAT_08027360 + 6) & 0x10) == 0) &&
          (DAT_080273fc < *(int *)(*(int *)(DAT_080273f4 + DAT_080273f8) + 0x54))) {
    FUN_080275f0(DAT_08027400,*(undefined4 *)(*(int *)(DAT_08027404 + 0x44) + 0x24));
    FUN_0801f63c(9);
    *(byte *)(iVar3 + 6) = *(byte *)(iVar3 + 6) | 0x10;
    *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) & 0x7f;
    *(byte *)(iVar3 + 5) = *(byte *)(iVar3 + 5) & 0xe0;
  }
LAB_080273e6:
  FUN_08027408(param_1);
  return (ulonglong)in_lr << 0x20;
}


