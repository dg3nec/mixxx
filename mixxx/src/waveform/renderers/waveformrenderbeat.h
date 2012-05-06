#ifndef WAVEFORMRENDERBEAT_H
#define WAVEFORMRENDERBEAT_H

#include <QColor>

#include "waveform/renderers/waveformrendererabstract.h"
#include "track/beats.h"
#include "util.h"

class ControlObjectThreadMain;

class WaveformRenderBeat : public WaveformRendererAbstract {
  public:
    explicit WaveformRenderBeat( WaveformWidgetRenderer* waveformWidgetRenderer);
    virtual ~WaveformRenderBeat();

    virtual void init();
    virtual void setup( const QDomNode& node);
    virtual void draw( QPainter* painter, QPaintEvent* event);

  private:
    QColor m_beatColor;
    QColor m_highBeatColor;
    ControlObjectThreadMain* m_beatActive;
    SampleList m_beatsCache;

    DISALLOW_COPY_AND_ASSIGN(WaveformRenderBeat);
};

#endif //WAVEFORMRENDERBEAT_H
